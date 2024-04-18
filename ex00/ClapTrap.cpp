/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:18:19 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/18 19:12:08 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& _name)
: _name(_name)
{
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Clap Trap " << "\x1b[32m" << _name << "\x1b[0m" << " constructor has been called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	*this = copy;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Clap Trap " << "\x1b[32m" << _name << "\x1b[0m" << " destructor has been called!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	if (this != &copy)
	{}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0)
	{
		std::cout << "ClapTrap " << "\x1b[32m" << _name << "\x1b[0m" << " has attacked " << "\x1b[31m" << target << "\x1b[0m" << " causing " << "\x1b[33m" << _attackDamage << "\x1b[0m" << " damage points..." << std::endl;
		_energyPoints--;
	}
	else
		std::cout << "ClapTrap " << "\x1b[32m" << _name << "\x1b[0m" << " has no energyPoints left!" << std::endl;

}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		_hitPoints -= amount;
		std::cout << "ClapTrap " << "\x1b[32m" << _name << "\x1b[0m" << " has taken " << "\x1b[33m" << amount << "\x1b[0m" << " points of damage, leaving it with only " << "\x1b[33m" << _hitPoints << "\x1b[0m" << " left!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << "\x1b[32m" << _name << "\x1b[0m" << " has no hitPoints left" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0)
	{
		_hitPoints += amount;
std::cout << "ClapTrap " << "\x1b[32m" << _name << " has taken " << "\x1b[0m" << "\x1b[33m" << amount << "\x1b[0m" << " points of health, it now has " << "\x1b[33m" << _hitPoints << "\x1b[0m" << " hitPoints!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << "\x1b[32m" << _name << "\x1b[0m" << " has no energyPoints left" << std::endl;
}
