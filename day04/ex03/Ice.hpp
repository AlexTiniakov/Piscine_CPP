/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:49:16 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/06 16:49:27 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class Ice: public AMateria
{

public:
	Ice(void);
	Ice(std::string const & type);
	Ice(Ice const &);
	~Ice();
	using AMateria::operator=;

	Ice*		clone(void) const;
	void		use(ICharacter& target);
};

#endif
