/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullets.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 17:57:48 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/07 22:56:45 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bullets.hpp"

Bullets::Bullets()
{
    i = -1;
}

Bullets::~Bullets()
{
}

void    Bullets::check_f(void)
{
    if (this->i == -1)
    {
        mvprintw(this->_y, this->_x, " ");
        return ;
    }
    else
    {
        mvprintw(this->_y, this->_x , " ");
        this->_x++;
        mvprintw(this->_y, this->_x , "-");
        if (this->_x == 100)
        {
            mvprintw(this->_y, this->_x , " ");
            this->_x = 0;
            this->i = -1;
        }
    }
}