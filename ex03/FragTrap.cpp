/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:45:02 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/24 15:09:53 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

const int FragTrap::_subHitPoints = 100;
const int FragTrap::_subEnergyPoints = 100;
const int FragTrap::_subAttackDamage = 30;

//constructeur par default
FragTrap::FragTrap () : ClapTrap()
{
	_name = "DefaultFrag";
	_hitPoints = _subHitPoints;
	_energyPoints = _subEnergyPoints;
	_attackDamage = _subAttackDamage;
	std::cout << "FragTrap " << "\x1b[32m" << _name << "\x1b[0m" << " constructor by default has been created!" << std::endl;
	std::cout << _name << " now has : " << "\x1b[32m" << _hitPoints << " hitPoints, " << _energyPoints << " energyPoints and " << _attackDamage << " attackDamage points" << "\x1b[0m" << std::endl;
}
//constructeur par name
FragTrap::FragTrap (const std::string& name) : ClapTrap(name)
{
	_name = name;
	_hitPoints = _subHitPoints;
	_energyPoints = _subEnergyPoints;
	_attackDamage = _subAttackDamage;
	std::cout << "FragTrap " << "\x1b[32m" << _name << "\x1b[0m" << " constructor has been called!" << std::endl;
}
//constructeur par copie

FragTrap::FragTrap (const FragTrap& copy) : ClapTrap(copy.getName())
{
	std::cout << "FragTrap " << "\x1b[32m" << copy.getName() << "\x1b[0m" << " copy constructor has been called!" << std::endl;
}
//destructeur
FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << "\x1b[32m" << _name << "\x1b[0m" << " destructor has been called!" << std::endl;
}
//operateur d'affection
FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	if (this != &copy)
	{}
	return (*this);
}
//methods
void	FragTrap::highFivesGuys(void)
{
	std::cout << "\x1b[35m" << "FragTrap: " << this->_name << " is High Fiving yall" << "\x1b[0m" << std::endl;
}

