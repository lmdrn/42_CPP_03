/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:11:50 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/24 15:09:51 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

const int ScavTrap::_subHitPoints = 100;
const int ScavTrap::_subEnergyPoints = 50;
const int ScavTrap::_subAttackDamage = 20;

//constructeur par default
ScavTrap::ScavTrap () : ClapTrap()
{
	_name = "DefaultScav";
	_hitPoints = _subHitPoints;
	_energyPoints = _subEnergyPoints;
	_attackDamage = _subAttackDamage;
	std::cout << "ScavTrap " << "\x1b[32m" << _name << "\x1b[0m" << " constructor by default has been created!" << std::endl;
	std::cout << _name << " now has : " << "\x1b[32m" << _hitPoints << " hitPoints, " << _energyPoints << " energyPoints and " << _attackDamage << " attackDamage points" << "\x1b[0m" << std::endl;
}
//constructeur par name
ScavTrap::ScavTrap (const std::string& name) : ClapTrap(name)
{

	_name = name;
	_hitPoints = _subHitPoints;
	_energyPoints = _subEnergyPoints;
	_attackDamage = _subAttackDamage;
	std::cout << "ScavTrap " << "\x1b[32m" << _name << "\x1b[0m" << " constructor has been called!" << std::endl;
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

void	ScavTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap " << "\x1b[32m" << _name << "\x1b[0m" << " has attacked " << "\x1b[31m" << target << "\x1b[0m" << " causing " << "\x1b[33m" << _attackDamage << "\x1b[0m" << " damage points..." << std::endl;
		_energyPoints--;
	}
	else
		std::cout << "\x1b[31m" << "ClapTrap "<< _name << " has no energyPoints or hitPoints left!" << "\x1b[0m" << std::endl;

}

