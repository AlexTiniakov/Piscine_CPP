// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 23:03:18 by otiniako          #+#    #+#             //
//   Updated: 2018/10/04 23:03:18 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# include <iostream>

class ScavTrap
{
private:
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
	ScavTrap(void);//+
	~ScavTrap(void);//+
	ScavTrap(const ScavTrap &rhs);//+
	ScavTrap(std::string name);//+
	ScavTrap	&operator=(const ScavTrap &rhs);//+

	void		rangedAttack(std::string const & target);//+
	void		meleeAttack(std::string const & target);//+
	void		takeDamage(unsigned int amount);//+
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer(void);
};

#endif