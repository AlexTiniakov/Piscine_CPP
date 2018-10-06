/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:34:51 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/06 16:35:04 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
#include "Enemy.hpp"

class RadScorpion : public Enemy
{

public:
	RadScorpion();
	RadScorpion(RadScorpion const &);
	~RadScorpion();
	using Enemy::operator=;
};

#endif