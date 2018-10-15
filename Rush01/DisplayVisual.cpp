/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DisplayVisual.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 16:12:40 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/14 23:17:00 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DisplayVisual.hpp"
#include "SDL.h"
#include    <stdlib.h>
#include    <iostream>
#include    <unistd.h>

int DisplayVisual::_w = 500;
int DisplayVisual::_h = 500;
SDL_Color DisplayVisual::_textColor = { 0xFF, 0xFF, 0xFF, 0xFF };

DisplayVisual::DisplayVisual() {}

DisplayVisual::DisplayVisual(Module & mod) {
    int        tw, th;
    tw = th = 0;
    SDL_Color col = {0, 255, 255, 0xFF};

    TTF_Init();
    _font = TTF_OpenFont("ARIAL.TTF", 20);
    _font1 = TTF_OpenFont("Pacifico.ttf", 20);

    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Couldn't initialize SDL: %s", SDL_GetError());
        std::system("pkill -9 ft_gkrellm");
        exit(-1);
    }

    _srf = SDL_LoadBMP("cosmos.bmp");
    _wind = SDL_CreateWindow("SYSTEM MONITOR", 410, 0, 500, 500, SDL_WINDOW_SHOWN|SDL_WINDOW_OPENGL);
    _rend = SDL_CreateRenderer(_wind, -1, SDL_RENDERER_ACCELERATED);

    std::string         Host = "Hostname : " + mod.getHostname();
    std::string         User = "Username : " + mod.getUsername();
    std::string         Versh = "Vershen : " + mod.getVersion();
    std::string         Datas = "Data: " + mod.getData();
    std::string         CpuName = "CPU : " + mod.getCPU();
    std::string         CpuCore = "CPU Cores : " + mod.getCPU_core();
    std::string         Welcome = "WELCOME TO SYSTEM MONITOR, " + mod.getUsername() + "!";

    _hostname = TTF_RenderText_Solid( _font, &Host[0], _textColor );
    _username = TTF_RenderText_Solid( _font, &User[0], _textColor );
    _vershon = TTF_RenderText_Solid( _font, &Versh[0], _textColor );
    _data = TTF_RenderText_Solid( _font, &Datas[0], _textColor );
    _cpuCoreSrf = TTF_RenderText_Solid( _font, &CpuCore[0], _textColor );
    _cpuNameSrf = TTF_RenderText_Solid( _font, &CpuName[0], _textColor );
    _WelcomeSrf = TTF_RenderText_Solid( _font1, &Welcome[0], col);

    _hostnameTextr  = SDL_CreateTextureFromSurface( _rend,  _hostname);
    _usernameTextr = SDL_CreateTextureFromSurface( _rend,  _username);
    _vershonTextr = SDL_CreateTextureFromSurface( _rend, _vershon);
    _dataTextr = SDL_CreateTextureFromSurface( _rend, _data);
    _cpuCoreTextr = SDL_CreateTextureFromSurface( _rend, _cpuCoreSrf);
    _cpuNameTextr = SDL_CreateTextureFromSurface( _rend, _cpuNameSrf);
    _WelcomeTextr = SDL_CreateTextureFromSurface( _rend, _WelcomeSrf);

    SDL_QueryTexture(_hostnameTextr, NULL, NULL, &_Hostname_Rect.w, &_Hostname_Rect.h);
    SDL_QueryTexture(_usernameTextr, NULL, NULL, &_Username_Rect.w, &_Username_Rect.h);
    SDL_QueryTexture(_vershonTextr, NULL, NULL, &_Vershon_Rect.w, &_Vershon_Rect.h);
    SDL_QueryTexture(_dataTextr, NULL, NULL, &_Data_Rect.w, &_Data_Rect.h);
    SDL_QueryTexture(_cpuCoreTextr, NULL, NULL, &_CpuCoreSrf_Rect.w, &_CpuCoreSrf_Rect.h);
    SDL_QueryTexture(_cpuNameTextr, NULL, NULL, &_CpuNameSrf_Rect.w, &_CpuNameSrf_Rect.h);
    SDL_QueryTexture(_WelcomeTextr, NULL, NULL, &_Welcome_Rect.w, &_Welcome_Rect.h);
    
    _Hostname_Rect.x = 10;
    _Username_Rect.x = 10;
    _Vershon_Rect.x = 10;
    _Data_Rect.x = 10;
    _CpuCoreSrf_Rect.x = 10;
    _CpuNameSrf_Rect.x = 10;
    _Welcome_Rect.x = 40;

    _Hostname_Rect.y = 40;
    _Username_Rect.y = 80;
    _Vershon_Rect.y = 120;
    _Data_Rect.y = 0;
    _CpuCoreSrf_Rect.y = 200;
    _CpuNameSrf_Rect.y = 160;
    _Welcome_Rect.y = 460;
    
    if (!_srf) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Couldn't create surface from image: %s", SDL_GetError());
        std::system("pkill -9 ft_gkrellm");
        exit(-1);
    }
    _texture = SDL_CreateTextureFromSurface(_rend, _srf);
    if (!_texture) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Couldn't create texture from surface: %s", SDL_GetError());
        std::system("pkill -9 ft_gkrellm");
        exit(-1);
    }
        SDL_RenderClear(_rend);
        SDL_RenderCopy(_rend, _texture, NULL, NULL);
        SDL_RenderCopy(_rend, _hostnameTextr, NULL, &_Hostname_Rect);
        SDL_RenderCopy(_rend, _usernameTextr, NULL, &_Username_Rect);
        SDL_RenderCopy(_rend, _vershonTextr, NULL, &_Vershon_Rect);
        SDL_RenderCopy(_rend, _dataTextr, NULL, &_Data_Rect);
        SDL_RenderCopy(_rend, _cpuCoreTextr, NULL, &_CpuCoreSrf_Rect);
        SDL_RenderCopy(_rend, _cpuNameTextr, NULL, &_CpuNameSrf_Rect);
        SDL_RenderCopy(_rend, _WelcomeTextr, NULL, &_Welcome_Rect);
        SDL_RenderPresent(_rend);

        SDL_FreeSurface(_srf);
        SDL_FreeSurface(_hostname);
        SDL_FreeSurface(_username);
        SDL_FreeSurface(_vershon);
        SDL_FreeSurface(_data);
        SDL_FreeSurface(_ramSrf);
        SDL_FreeSurface(_cpuNameSrf);
}

DisplayVisual::~DisplayVisual() {
    SDL_Quit();
}

DisplayVisual::DisplayVisual(const DisplayVisual &rhs) {
     *this = rhs;
}

DisplayVisual   &DisplayVisual::operator=(const DisplayVisual &rhs) {
    (void)rhs;
    return (*this);
}

void    DisplayVisual::print(Module & mod) {
    printDate(mod);
    printTime(mod);
    printHostName(mod);
    printUser(mod);
    printVersion(mod);
    printCPU(mod);
    printCPUCores(mod);
    printCPUProcesses(mod);
    printCPUThreads(mod);
    printCPUUsage(mod);
    printRAMUsed(mod);
    printRAMFree(mod);
    printNetworkIn(mod);
    printNetworkOut(mod);
}

void                DisplayVisual::loop(Module & mod)
{
    bool            f = false;
	SDL_Event       e;
    std::string                     Time;
    std::string                     FreeRAM;
    std::string                     UsedRAM;
    std::string                     Process;
    std::string                     Threads;
    std::string                     Usage;

    while (!f) {
        Time = "Time : " + mod.getTime();
        _timeSrf = TTF_RenderText_Solid( _font, &Time[0], _textColor );
        _timeTextr = SDL_CreateTextureFromSurface( _rend, _timeSrf);
        SDL_QueryTexture(_timeTextr, NULL, NULL, &_timeSrf_Rect.w, &_timeSrf_Rect.h);
        _timeSrf_Rect.x = 350;
        _timeSrf_Rect.y = 0;

        Process = "CPU process : " + mod.getCPU_process();
        _cpuProcessSrf = TTF_RenderText_Solid( _font, &Process[0], _textColor );
        _cpuProcessTextr = SDL_CreateTextureFromSurface( _rend, _cpuProcessSrf);
        SDL_QueryTexture(_cpuProcessTextr, NULL, NULL, &_cpuProcess_Rect.w, &_cpuProcess_Rect.h);
        _cpuProcess_Rect.x = 10;
        _cpuProcess_Rect.y = 240;

        Threads = "CPU Threads : " + mod.getCPU_threads();
        _cpuThreadsSrf = TTF_RenderText_Solid( _font, &Threads[0], _textColor );
        _cpuThreadsTextr = SDL_CreateTextureFromSurface( _rend, _cpuThreadsSrf);
        SDL_QueryTexture(_cpuThreadsTextr, NULL, NULL, &_cpuThreads_Rect.w, &_cpuThreads_Rect.h);
        _cpuThreads_Rect.x = 10;
        _cpuThreads_Rect.y = 280;

        Usage = "CPU Usage : " + mod.getCPU_usage();
        _cpuUsageSrf = TTF_RenderText_Solid( _font, &Usage[0], _textColor );
        _cpuUsageTextr = SDL_CreateTextureFromSurface( _rend, _cpuUsageSrf);
        SDL_QueryTexture(_cpuUsageTextr, NULL, NULL, &_cpuUsage_Rect.w, &_cpuUsage_Rect.h);
        _cpuUsage_Rect.x = 10;
        _cpuUsage_Rect.y = 320;

        UsedRAM = "RAM Used : " + mod.getRam_used();
        _UsedRAMSrf = TTF_RenderText_Solid( _font, &UsedRAM[0], _textColor );
        _UsedRAMTextr = SDL_CreateTextureFromSurface( _rend, _UsedRAMSrf);
        SDL_QueryTexture(_UsedRAMTextr, NULL, NULL, &_UsedRAM_Rect.w, &_UsedRAM_Rect.h);
        _UsedRAM_Rect.x = 10;
        _UsedRAM_Rect.y = 360;

        FreeRAM = "RAM Free : " + mod.getRam_free();
        _FreeRAMSrf = TTF_RenderText_Solid( _font, &FreeRAM[0], _textColor );
        _FreeRAMTextr = SDL_CreateTextureFromSurface( _rend, _FreeRAMSrf);
        SDL_QueryTexture(_FreeRAMTextr, NULL, NULL, &_FreeRAM_Rect.w, &_FreeRAM_Rect.h);
        _FreeRAM_Rect.x = 10;
        _FreeRAM_Rect.y = 400;

        SDL_RenderClear(_rend);
        SDL_RenderCopy(_rend, _texture, NULL, NULL);
        SDL_RenderCopy(_rend, _timeTextr, NULL, &_timeSrf_Rect);
        SDL_RenderCopy(_rend, _hostnameTextr, NULL, &_Hostname_Rect);
        SDL_RenderCopy(_rend, _usernameTextr, NULL, &_Username_Rect);
        SDL_RenderCopy(_rend, _vershonTextr, NULL, &_Vershon_Rect);
        SDL_RenderCopy(_rend, _dataTextr, NULL, &_Data_Rect);
        SDL_RenderCopy(_rend, _cpuCoreTextr, NULL, &_CpuCoreSrf_Rect);
        SDL_RenderCopy(_rend, _cpuNameTextr, NULL, &_CpuNameSrf_Rect);
        SDL_RenderCopy(_rend, _cpuProcessTextr, NULL, &_cpuProcess_Rect);
        SDL_RenderCopy(_rend, _cpuThreadsTextr, NULL, &_cpuThreads_Rect);
        SDL_RenderCopy(_rend, _cpuUsageTextr, NULL, &_cpuUsage_Rect);
        SDL_RenderCopy(_rend, _UsedRAMTextr, NULL, &_UsedRAM_Rect);
        SDL_RenderCopy(_rend, _FreeRAMTextr, NULL, &_FreeRAM_Rect);
        SDL_RenderCopy(_rend, _WelcomeTextr, NULL, &_Welcome_Rect);
        SDL_RenderPresent(_rend);

        SDL_DestroyTexture(_timeTextr);
        SDL_DestroyTexture(_cpuProcessTextr);
        SDL_DestroyTexture(_cpuThreadsTextr);
        SDL_DestroyTexture(_cpuUsageTextr);
        SDL_DestroyTexture(_UsedRAMTextr);
        SDL_DestroyTexture(_FreeRAMTextr);

        SDL_FreeSurface(_timeSrf);
        SDL_FreeSurface(_cpuProcessSrf);
        SDL_FreeSurface(_cpuThreadsSrf);
        SDL_FreeSurface(_cpuUsageSrf);
        SDL_FreeSurface(_UsedRAMSrf);
        SDL_FreeSurface(_FreeRAMSrf);

        SDL_PollEvent(&e);
        if (e.type == SDL_QUIT || (e.type == SDL_KEYDOWN &&
			e.key.keysym.sym == SDLK_ESCAPE)) {
            exit(0);
        }
    }
}

void DisplayVisual::printDate(Module & mod) {
    (void)mod;
}

void DisplayVisual::printTime(Module & mod) {
    (void)mod;
}

void DisplayVisual::printHostName(Module & mod) {

    (void)mod;
}

void DisplayVisual::printUser(Module & mod) {
    (void)mod;
}

void DisplayVisual::printVersion(Module & mod) {
    (void)mod;
}

void DisplayVisual::printCPU(Module & mod) {
    (void)mod;
}

void DisplayVisual::printCPUCores(Module & mod) {
    (void)mod;
}

void DisplayVisual::printCPUProcesses(Module & mod) {
    (void)mod;
}

void DisplayVisual::printCPUThreads(Module & mod) {
     (void)mod;
}

void DisplayVisual::printCPUUsage(Module & mod) {
     (void)mod;
}

void DisplayVisual::printRAMUsed(Module & mod) {
     (void)mod;
}

void DisplayVisual::printRAMFree(Module & mod) {
     (void)mod;
}

void DisplayVisual::printNetworkIn(Module & mod) {
     (void)mod;
}

void DisplayVisual::printNetworkOut(Module & mod) {
     (void)mod;
}