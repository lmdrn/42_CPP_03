/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:55:12 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/19 18:16:55 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//constructeur par default
DiamondTrap::DiamondTrap () : ClapTrap((std::string)"defaultDiamond" + "_clap_name", 100, 50, 30), FragTrap(), ScavTrap()
{
	this->_name = "defaultDiamond";
//	std::cout << "DiamondTrap " << "\x1b[32m" << _name << "\x1b[0m" << " constructor by default has been created!" << std::endl;
	std::cout << _name << "now has : " << "\x1b[32m" << FragTrap::_hitPoints << " hitPoints, " << ScavTrap::_energyPoints << " energyPoints and " << FragTrap::_attackDamage << " attackDamage points" << "\x1b[0m" << std::endl;
}
//constructeur par name
DiamondTrap::DiamondTrap (const std::string& _name) : ClapTrap(_name + "_clap_name", 100, 50, 30), FragTrap(_name), ScavTrap(_name), name(_name)
{
//	std::cout << "DiamondTrap " << "\x1b[32m" << _name << "\x1b[0m" << " constructor has been called!" << std::endl;
	std::cout << _name << " now has : " << "\x1b[32m" << FragTrap::_hitPoints << " hitPoints, " << ScavTrap::_energyPoints << " energyPoints and " << FragTrap::_attackDamage << " attackDamage points" << "\x1b[0m" << std::endl;
}
//constructeur par copie

DiamondTrap::DiamondTrap (const DiamondTrap& copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy), _name(copy._name)
{
	std::cout << "DiamondTrap " << "\x1b[32m" << copy._name << "\x1b[0m" << " copy constructor has been called!" << std::endl;
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
	{}
	return (*this);
}
//methods
void	DiamondTrap::whoAmI(void) const
{
	std::cout << "\x1b[35m" << "DiamondTrap: " << _name << " ClapTrap:" << ClapTrap::_name << "\x1b[0m" << std::endl;
}

