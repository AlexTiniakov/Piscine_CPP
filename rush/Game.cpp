/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 17:24:01 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/07 23:00:47 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.hpp"

int Game::_width = 100;
int Game::_hight = 50;

Game::Game()
{
    win = newwin(_hight, _width, 0, 0);
    initscr();
    noecho();
    timeout(13);
    keypad(stdscr, TRUE);
    curs_set(0);
    set_random();
}

Game::~Game()
{
    endwin();
}

void Game::set_random()
{
    int i = -1;
    int j;
    while (++i < 15)
    {
        _enemies[i]._j = rand() % 48 + 1;
        j = 0;
        while (++j < i)
        {
            if (_enemies[i]._j == _enemies[j]._j)
            {
                _enemies[i]._j += 2;
                _enemies[i]._j %= 48 + 1;
                j = 0;
            }
        }
    }
}

int Game::ProcessEvents()
{
    int key;
    
    key = getch();
    if (key == 259 && _player.y > 0) //up
    {
        _player.print_space();
        _player.y--;
    }
    else if (key == 258 && _player.y < 50) //down
    {
        _player.print_space();
        _player.y++;
    }
    else if (key == 260 && _player.x > 0) //left
    {
        _player.print_space();
        _player.x--;
    }
    else if (key == 261 && _player.x < 100) //right
    {
        _player.print_space();
        _player.x++;
    }
    else if (key == 27)
        return (-1);
    else if (key == 32)
        _player.fight();
    refresh();
    return (0);
}

int Game::Update()
{
    int i = -1;
    int j;
    _player.print_pl();
    while (++i < 15)
        if (_enemies[i].check_deth(_player))
            return (-1);
    i = -1;
    while (++i < 100)
    {
        if (_player.bul[i].i == 1)
        {
            j = -1;
            while (++j < 15)
                if (_player.bul[i]._y == _enemies[j].y && _player.bul[i]._x == _enemies[j].x)
                {
                    _player.bul[i].i = -1;
                    _enemies[j].x = 100;
                }
            _player.bul[i].check_f();
        }
    }
    return (0);
}

void Game::Loop()
{
    while (1)
    {
        if (ProcessEvents() == -1)
            break ;
        if (Update() == -1)
            break ;
        //Render();
    }
}

int        Game::get_y_i(int i)
{
    return this->_enemies[i].y;
}

int        Game::get_x_i(int i)
{
    return this->_enemies[i].x;
}

void         Game::set_x_i(int i, int x)
{
    this->_enemies[i].x = x;
}