/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:39:58 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/06 16:40:00 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{

public:
	AssaultTerminator( void );
	AssaultTerminator( AssaultTerminator const & src );
	~AssaultTerminator( void );
	void	battleCry() const;
	void	rangedAttack() const;
	void	meleeAttack() const;
	ISpaceMarine* clone( void ) const;

	AssaultTerminator& operator=(AssaultTerminator const & rhs);
};

#endif
