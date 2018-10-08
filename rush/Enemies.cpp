/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemies.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 17:45:15 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/07 22:31:50 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemies.hpp"

Enemies::Enemies()
{
    x = 100;
    y = rand() % 50;
    _j = 10;
}

Enemies::~Enemies()
{
}

int Enemies::check_deth(Player const &player)
{
    if ((player.y == this->y && player.x == this->x) ||
    (player.y + 1 == this->y && player.x + 1 == this->x) ||
    (player.y + 2 == this->y && player.x == this->x))
    {
        mvprintw(player.y, player.x - 14 >= 0 ? player.x - 14 : 0, "Died! Press eny key to exit");
        while (getch() == -1)
            ;
        return (1);
    }
    if (this->x >= 0 && this->_j == 0)
    {
        this->x -= 1;
        mvprintw(this->y, this->x + 1, " ");
        mvprintw(this->y, this->x, "#");
        this->_j = 10;
    }
    if (this->x <= 0)
    {
        mvprintw(this->y, 0, " ");
        this->x = 100;
    }
    if (this->_j != 0)
        this->_j -= 1;
    return (0);
}