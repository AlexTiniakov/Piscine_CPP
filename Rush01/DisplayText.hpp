/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DisplayText.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybokina <ybokina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 16:12:27 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/14 23:22:12 by ybokina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAYTEXT_HPP
# define DISPLAYTEXT_HPP
# include "IMonitorDisplay.hpp"

class DisplayText: public IMonitorDisplay
{
public:
    DisplayText(void);
    ~DisplayText(void);
    DisplayText(const DisplayText &rhs);
    DisplayText	&operator=(const DisplayText &rhs);

    virtual void print(Module & mod);
    virtual void printDate(Module & mod);
	virtual void printTime(Module & mod);
	virtual void printHostName(Module & mod);
	virtual void printUser(Module & mod);
	virtual void printVersion(Module & mod);
	virtual void printCPU(Module & mod);
	virtual void printCPUCores(Module & mod);
	virtual void printCPUProcesses(Module & mod);
	virtual void printCPUThreads(Module & mod);
	virtual void printCPUUsage(Module & mod);
	virtual void printRAMUsed(Module & mod);
	virtual void printRAMFree(Module & mod);
	virtual void printNetworkIn(Module & mod);
	virtual void printNetworkOut(Module & mod);
	void printPony1();
	void clearPony();

private:
	bool 		_first;
    WINDOW      *_win;
    static int  _width;
    static int  _hight;
};

#endif