/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:30:17 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/06 16:30:27 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENNEMY_HPP
# define ENNEMY_HPP

#include <string>

class Enemy
{
	protected:
		std::string const	_type;
		int					_HP;

	public:
		Enemy();
		Enemy(Enemy const &);
		Enemy(int hp, std::string const & type);
		virtual ~Enemy();
		std::string const &		getType() const;
		int 					getHP() const;
		virtual void 			takeDamage(int);
		Enemy &					operator=(Enemy const &);
};

#endif