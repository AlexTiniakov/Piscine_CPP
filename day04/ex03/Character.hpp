/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:45:07 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/06 16:45:10 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <iostream>

class Character: public ICharacter
{

private:
	std::string 	_name;
	AMateria**		_tab;

public:
	Character(void);
	Character(std::string name);
	Character(Character const & cpy);
	~Character();
	Character &	operator=(Character const & rhs);

	std::string const & getName() const;
	void 				equip(AMateria* m);
	void 				unequip(int idx);
	void 				use(int idx, ICharacter& target);
};

#endif
