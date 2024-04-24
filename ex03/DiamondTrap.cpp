/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:35:29 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/24 14:54:59 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//constructeur par default
DiamondTrap::DiamondTrap ()
: ClapTrap()
{
	_name = "Default";
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = FragTrap::_subHitPoints;
	_energyPoints = ScavTrap::_subEnergyPoints;
	_attackDamage = FragTrap::_subAttackDamage;
	std::cout << "DiamondTrap " << "\x1b[32m" << _name << "\x1b[0m" << " constructor by default has been created!" << std::endl;
	std::cout << _name << " now has : " << "\x1b[32m" << _hitPoints << " hitPoints, " << _energyPoints << " energyPoints and " << _attackDamage << " attackDamage points" << "\x1b[0m" << std::endl;
}
//constructeur par name
DiamondTrap::DiamondTrap (const std::string& name)
: ClapTrap(name + "_clap_name")
{
	_name = name;
	_hitPoints = FragTrap::_subHitPoints;
	_energyPoints = ScavTrap::_subEnergyPoints;
	_attackDamage = FragTrap::_subAttackDamage;
	std::cout << "DiamondTrap " << "\x1b[32m" << _name << "\x1b[0m" << " constructor has been called!" << std::endl;
	std::cout << _name << " now has : " << "\x1b[32m" << _hitPoints << " hitPoints, " << _energyPoints << " energyPoints and " << _attackDamage << " attackDamage points" << "\x1b[0m" << std::endl;
}
//constructeur par copie

DiamondTrap::DiamondTrap (const DiamondTrap& copy)
: ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
	std::cout << "DiamondTrap " << "\x1b[32m" << _name << "\x1b[0m" << " copy constructor has been called!" << std::endl;
}
//destructeur
DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << "\x1b[32m" << _name << "\x1b[0m" << " destructor has been called!" << std::endl;
}
//operateur d'affection
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy)
{
	if (this != &copy)
	{
		ClapTrap::operator=(copy);
	}
	return (*this);
}
//methods
void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "\x1b[35m" << "DiamondTrap: " << _name << " is a ClapTrap named " << ClapTrap::_name << "\x1b[0m" << std::endl;
}

