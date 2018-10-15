/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorDisplay.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 13:12:37 by ybokina           #+#    #+#             */
/*   Updated: 2018/10/14 20:18:43 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITORDISPLAY_HPP
# define IMONITORDISPLAY_HPP
# include "Module.hpp"
#include "SDL.h"
#include "SDL_mixer.h"
#include "SDL_ttf.h"
#include "SDL_net.h"
#include <exception>
#include <ncurses.h>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include <string>

class IMonitorDisplay
{
public:
	virtual ~IMonitorDisplay() {}
	virtual void print(Module & mod) = 0;
	virtual void printDate(Module & mod) = 0;
	virtual void printTime(Module & mod) = 0;
	virtual void printHostName(Module & mod) = 0;
	virtual void printUser(Module & mod) = 0;
	virtual void printVersion(Module & mod) = 0;
	virtual void printCPU(Module & mod) = 0;
	virtual void printCPUCores(Module & mod) = 0;
	virtual void printCPUProcesses(Module & mod) = 0;
	virtual void printCPUThreads(Module & mod) = 0;
	virtual void printCPUUsage(Module & mod) = 0;
	virtual void printRAMUsed(Module & mod) = 0;
	virtual void printRAMFree(Module & mod) = 0;
	virtual void printNetworkIn(Module & mod) = 0;
	virtual void printNetworkOut(Module & mod) = 0;
	
};

#endif
