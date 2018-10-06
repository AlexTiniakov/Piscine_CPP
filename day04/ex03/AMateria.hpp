/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:48:08 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/06 16:48:18 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include "ICharacter.hpp"
# include <iostream>

class AMateria
{
private:

	std::string		type_;
	unsigned int 	xp_;

public:

	AMateria(void);
	AMateria(std::string const & type);
	AMateria(AMateria const & cpy);
	virtual ~AMateria();
	AMateria &	operator=(AMateria const & rhs);

	std::string const &	getType() const;
	unsigned int		getXP() const;
	void				setXP();
	
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
};

#endif