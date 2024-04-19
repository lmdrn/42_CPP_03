/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:11:50 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/19 18:28:32 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//constructeur par default
ScavTrap::ScavTrap () : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << "\x1b[32m" << _name << "\x1b[0m" << " constructor by default has been created!" << std::endl;
	std::cout << _name << "now has : " << "\x1b[32m" << _hitPoints << " hitPoints, " << _energyPoints << " energyPoints and " << _attackDamage << " attackDamage points" << "\x1b[0m" << std::endl;
}
//constructeur par name
ScavTrap::ScavTrap (const std::string& _name) : ClapTrap(_name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << "\x1b[32m" << _name << "\x1b[0m" << " constructor has been called!" << std::endl;
	std::cout << _name << " now has : " << "\x1b[32m" << _hitPoints << " hitPoints, " << _energyPoints << " energyPoints and " << _attackDamage << " attackDamage points" << "\x1b[0m" << std::endl;
}
//constructeur par copie

ScavTrap::ScavTrap (const ScavTrap& copy) : ClapTrap(copy.getName())
{
	std::cout << "ScavTrap " << "\x1b[32m" << copy.getName() << "\x1b[0m" << " copy constructor has been called!" << std::endl;
}
//destructeur
ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << "\x1b[32m" << _name << "\x1b[0m" << " destructor has been called!" << std::endl;
}
//operateur d'affection
ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	if (this != &copy)
	{}
	return (*this);
}
//methods
void	ScavTrap::guardGate()
{
	std::cout << "\x1b[35m" << "ScavTrap: " << this->_name << " is now in GateKeeper mode" << "\x1b[0m" << std::endl;
}

