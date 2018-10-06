/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:50:44 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/06 16:50:54 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include <iostream>

class MateriaSource : public IMateriaSource
{
private:
	AMateria**		_tabm;

public:
	
	MateriaSource(void);
	MateriaSource(MateriaSource const & cpy);
	~MateriaSource() {}
	MateriaSource & operator=(MateriaSource const & rhs);

	void 		learnMateria(AMateria*);
	AMateria* 	createMateria(std::string const & type);
};

#endif
