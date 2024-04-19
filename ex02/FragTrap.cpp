/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:45:02 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/19 15:48:06 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//constructeur par default
FragTrap::FragTrap () : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << "\x1b[32m" << _name << "\x1b[0m" << " constructor by default has been created!" << std::endl;
	std::cout << _name << "now has : " << "\x1b[32m" << _hitPoints << " hitPoints, " << _energyPoints << " energyPoints and " << _attackDamage << " attackDamage points" << "\x1b[0m" << std::endl;
}
//constructeur par name
FragTrap::FragTrap (const std::string& _name) : ClapTrap(_name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << "\x1b[32m" << _name << "\x1b[0m" << " constructor has been called!" << std::endl;
	std::cout << _name << " now has : " << "\x1b[32m" << _hitPoints << " hitPoints, " << _energyPoints << " energyPoints and " << _attackDamage << " attackDamage points" << "\x1b[0m" << std::endl;
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

