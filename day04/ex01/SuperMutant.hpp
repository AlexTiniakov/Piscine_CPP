/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:35:28 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/06 16:35:47 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include "Enemy.hpp"

class SuperMutant : public Enemy
{

public:
	SuperMutant();
	SuperMutant(SuperMutant const &);
	~SuperMutant();
	using Enemy::operator=;
	void 		takeDamage(int);
};

#endif