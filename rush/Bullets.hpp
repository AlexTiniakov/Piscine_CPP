/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullets.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 17:57:34 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/07 22:56:43 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BULLETS_HPP
# define BULLETS_HPP
# include <string>
# include <ncurses.h>

class Bullets
{
public:
    int i;
    int _x;
    int _y;
    Bullets(void);
    ~Bullets(void);
    Bullets(const Bullets &rhs);
    Bullets	&operator=(const Bullets &rhs);

    void    check_f(void);
private:
    

};

#endif