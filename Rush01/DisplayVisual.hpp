/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DisplayVisual.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybokina <ybokina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 16:12:45 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/14 23:19:01 by ybokina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAYVISUAL_HPP
# define DISPLAYVISUAL_HPP
# include "IMonitorDisplay.hpp"

class DisplayVisual: public IMonitorDisplay
{
public:
    DisplayVisual(void);
	DisplayVisual(Module & mod);
    ~DisplayVisual(void);
    DisplayVisual(const DisplayVisual &rhs);
    DisplayVisual	&operator=(const DisplayVisual &rhs);
	void loop(Module & mod);

    void print(Module & mod);
    void printDate(Module & mod);
	void printTime(Module & mod);
	void printHostName(Module & mod);
	void printUser(Module & mod);
	void printVersion(Module & mod);
	void printCPU(Module & mod);
	void printCPUCores(Module & mod);
	void printCPUProcesses(Module & mod);
	void printCPUThreads(Module & mod);
	void printCPUUsage(Module & mod);
	void printRAMUsed(Module & mod);
	void printRAMFree(Module & mod);
	void printNetworkIn(Module & mod);
	void printNetworkOut(Module & mod);

private:
	static bool     sdl_init;
    SDL_Window *    _wind;
	SDL_Renderer *  _rend;
	SDL_Surface *   _srf;
	TTF_Font *      _font;
	TTF_Font *      _font1;
	SDL_Texture *   _texture;
	static SDL_Color       _textColor;

    SDL_Texture *	_dataTextr;
    SDL_Texture *	_timeTextr;
	SDL_Texture *	_hostnameTextr;
    SDL_Texture *	_usernameTextr;
    SDL_Texture *	_vershonTextr;
    SDL_Texture *	_cpuNameTextr;
	SDL_Texture *	_cpuCoreTextr;
	SDL_Texture *	_cpuProcessTextr;
	SDL_Texture *	_cpuThreadsTextr;
	SDL_Texture *	_cpuUsageTextr;
	SDL_Texture *	_UsedRAMTextr;
	SDL_Texture *	_FreeRAMTextr;
	SDL_Texture *	_WelcomeTextr;

	SDL_Surface *                   _hostname;
    SDL_Surface *                   _username;
    SDL_Surface *                   _vershon;
    SDL_Surface *                   _data;
    SDL_Surface *                   _ramSrf;
    SDL_Surface *                   _cpuNameSrf;
	SDL_Surface *                   _cpuCoreSrf;
	SDL_Surface *                   _timeSrf;
	SDL_Surface *                   _cpuProcessSrf;
	SDL_Surface *                   _cpuThreadsSrf;
	SDL_Surface *                   _cpuUsageSrf;
	SDL_Surface *                   _UsedRAMSrf;
	SDL_Surface *                   _FreeRAMSrf;
	SDL_Surface *                   _WelcomeSrf;

	SDL_Rect                _Hostname_Rect;
    SDL_Rect                _Username_Rect;
    SDL_Rect                _Vershon_Rect;
    SDL_Rect                _Data_Rect;
    SDL_Rect                _CpuNameSrf_Rect;
	SDL_Rect                _CpuCoreSrf_Rect;
	SDL_Rect                _timeSrf_Rect;
	SDL_Rect                _cpuProcess_Rect;
	SDL_Rect                _cpuThreads_Rect;
	SDL_Rect                _UsedRAM_Rect;
	SDL_Rect                _FreeRAM_Rect;
	
	SDL_Rect                _cpuUsage_Rect;
	SDL_Rect                _Welcome_Rect;

	static int				_w;
	static int				_h;
};

int printData();

#endif