/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:49:56 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/06 16:50:04 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP
# include "AMateria.hpp"
# include <iostream>

class IMateriaSource
{
	
public:
	virtual ~IMateriaSource() {}
	virtual void 		learnMateria(AMateria*) = 0;
	virtual AMateria* 	createMateria(std::string const & type) = 0;
};

#endif
