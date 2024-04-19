/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:18:19 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/19 18:26:08 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "defaultClap";
	std::cout << "ClapTrap " << "\x1b[32m" << _name << "\x1b[0m" << " constructor by default has been called!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& _name)
: _name(_name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << "\x1b[32m" << _name << "\x1b[0m" << " constructor has been called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
: _name(copy._name), _hitPoints(copy._hitPoints), _energyPoints(copy._energyPoints), _attackDamage(copy._attackDamage)
{
	std::cout << "ClapTrap " << "\x1b[32m" << copy.getName() << "\x1b[0m" << " copy constructor has been called!" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << "\x1b[32m" << _name << "\x1b[0m" << " destructor has been called!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	if (this != &copy)
	{
		_name = copy._name;
		_hitPoints = copy._hitPoints;
		_energyPoints = copy._energyPoints;
		_attackDamage = copy._attackDamage;
	}
	return (*this);
}

std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap " << "\x1b[32m" << _name << "\x1b[0m" << " has attacked " << "\x1b[31m" << target << "\x1b[0m" << " causing " << "\x1b[33m" << _attackDamage << "\x1b[0m" << " damage points..." << std::endl;
		_energyPoints--;
	}
	else
		std::cout << "\x1b[31m" << "ClapTrap "<< _name << " has no energyPoints or hitPoints left!" << "\x1b[0m" << std::endl;

}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		_hitPoints -= amount;
		if (_hitPoints < 0)
			_hitPoints = 0;
		std::cout << "ClapTrap " << "\x1b[32m" << _name << "\x1b[0m" << " has taken " << "\x1b[33m" << amount << "\x1b[0m" << " points of damage, leaving it with " << "\x1b[33m" << _hitPoints << "\x1b[0m" << " left!" << std::endl;
	}
	else
		std::cout << "\x1b[31m" << "ClapTrap " <<_name << " has no hitPoints left" << "\x1b[0m" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0)
	{
		_energyPoints--;
		_hitPoints += amount;
		if (_energyPoints < 0)
			_energyPoints = 0;
std::cout << "ClapTrap " << "\x1b[32m" << _name << "\x1b[0m" << " has taken " << "\x1b[33m" << amount << "\x1b[0m" << " points of health, it now has " << "\x1b[33m" << _hitPoints << "\x1b[0m" << " hitPoints!" << std::endl;
	}
	else
		std::cout << "\x1b[31m" << "ClapTrap "  << _name << " has no energyPoints left" << "\x1b[0m" << std::endl;
}

