/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 17:23:57 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/07 23:00:30 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_HPP
# define GAME_HPP
# include "Player.hpp"
# include "Enemies.hpp"
# include <ncurses.h>
# include <ctime>

class Game
{
public:
    Game(void);
    ~Game(void);
    Game(const Game &rhs);
    Game	&operator=(const Game &rhs);
    void    Loop(void);
    int     Update(void);
    int     ProcessEvents(void);
    void     set_random(void);
    int        get_y_i(int i);
    int        get_x_i(int i);
    void         set_x_i(int i, int x);

private:
    WINDOW      *win;
    static int  _width;
    static int  _hight;
    Player      _player;
    Enemies     _enemies[15];
    
};


#endif