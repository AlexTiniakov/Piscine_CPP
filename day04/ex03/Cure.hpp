/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:48:50 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/06 16:49:00 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class Cure: public AMateria
{

public:
	Cure(void);
	Cure(std::string const & type);
	Cure(Cure const &);
	~Cure();
	using AMateria::operator=;

	Cure*		clone(void) const;
	void		use(ICharacter& target);
};

#endif
