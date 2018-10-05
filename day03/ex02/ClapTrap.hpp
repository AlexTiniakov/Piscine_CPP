// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 16:59:57 by otiniako          #+#    #+#             //
//   Updated: 2018/10/05 16:59:58 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iostream>

class ClapTrap
{

protected:
    std::string	_Name;
	int			_Hit_points;
	int			_Max_hit_points;
	int			_Energy_points;
	int			_Max_energy_points;
	int			_Level;
	int			_Melee_attack_damage;
	int			_Ranged_attack_damage;
	int			_Armor_damage_reduction;

public:
    ClapTrap(void);//+
    ~ClapTrap(void);//+
    ClapTrap(const ClapTrap &rhs);//+
    ClapTrap(std::string name);//+
    ClapTrap	&operator=(const ClapTrap &rhs);

	void		setName(std::string name);
    void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

};

#endif