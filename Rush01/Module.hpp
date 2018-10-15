/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Module.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybokina <ybokina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 16:30:27 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/14 02:35:59 by ybokina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_HPP
# define MODULE_HPP
#include "IMonitorModule.hpp"
#include <time.h>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/utsname.h>
#include <stdint.h>
#include <string>
#include <cstring>
#include <sys/types.h>
#include <sys/sysctl.h>
#include <stdint.h>

class Module : public IMonitorModule
{
public:
    Module();
    Module(Module const & src);
    ~Module();
    Module &operator=(Module const & src);
    virtual std::string getData();
    virtual std::string getTime();
	virtual std::string getHostname();
	virtual std::string getUsername();
	virtual std::string getVersion();
	virtual std::string getCPU();
	virtual std::string getCPU_core();
	virtual std::string getCPU_process();
	virtual std::string getCPU_threads();
	virtual std::string getCPU_usage();
	virtual std::string getRam_used();
	virtual std::string getRam_free();
	virtual std::string getNetwork_in();
	virtual std::string getNetwork_out();
};

#endif
