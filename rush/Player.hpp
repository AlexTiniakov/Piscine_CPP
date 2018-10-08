/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 17:45:29 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/07 22:49:49 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP
# define PLAYER_HPP
# include "Bullets.hpp"
# include <ncurses.h>

class Player
{
public:
    int x;
    int y;
    Bullets bul[100];
    
    Player(void);
    ~Player(void);
    Player(const Player &rhs);
    Player	&operator=(const Player &rhs);
    void    fight(void);
    void    print_space();
    void    print_pl();
    void    check();

protected:

};

#endif