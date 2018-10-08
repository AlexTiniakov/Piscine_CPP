/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemies.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 17:45:11 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/07 22:31:17 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMIES_HPP
# define ENEMIES_HPP
#include "Player.hpp"

class Enemies: public Player
{
public:
    int _j;
    Enemies(void);
    ~Enemies(void);
    Enemies(const Enemies &rhs);
    Enemies	&operator=(const Enemies &rhs);

    int check_deth(Player const &player);

private:
    
};

#endif