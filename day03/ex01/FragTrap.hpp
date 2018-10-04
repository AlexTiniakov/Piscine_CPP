// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 16:04:25 by otiniako          #+#    #+#             //
//   Updated: 2018/10/04 16:04:29 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# include <iostream>

class FragTrap
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
	FragTrap(void);//+
	~FragTrap(void);//+
	FragTrap(const FragTrap &rhs);//+
	FragTrap(std::string name);//+
	FragTrap	&operator=(const FragTrap &rhs);//+

	void		rangedAttack(std::string const & target);//+
	void		meleeAttack(std::string const & target);//+
	void		takeDamage(unsigned int amount);//+
	void		beRepaired(unsigned int amount);
	void		vaulthunter_dot_exe(std::string const & target);
};

#endif