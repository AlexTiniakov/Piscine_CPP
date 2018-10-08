/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 17:45:25 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/07 22:14:30 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"

Player::Player(){
    x = 0;
    y = 25;
}

Player::~Player(){}

void Player::fight()
{
    int i = -1;
    while (++i < 100)
    {
        if (bul[i].i == -1)
        {
            bul[i].i = 1;
            bul[i]._x = this->x + 1;
            bul[i]._y = this->y + 1;
            break ;
        }
    }
}

void    Player::print_space()
{
    mvprintw(this->y, this->x, " ");
    mvprintw(this->y + 1, this->x, "  ");
    mvprintw(this->y + 2, this->x, " ");
}

void    Player::print_pl()
{
    mvprintw(this->y, this->x, "#");
    mvprintw(this->y + 1, this->x, "##");
    mvprintw(this->y + 2, this->x, "#");
}

void   Player::check()
{
    
}