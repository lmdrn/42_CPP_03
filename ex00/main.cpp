/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:22:48 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/19 11:07:21 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("Lea");
	ClapTrap another;
	ClapTrap again = clapTrap;

	clapTrap.attack("Anonymous");
	another.attack("Again");
	again.attack("Lea");
	clapTrap.takeDamage(5);
	again.takeDamage(5);
	clapTrap.beRepaired(3);
	clapTrap.attack("Lea");
	clapTrap.takeDamage(10);
	//clapTrap.beRepaired(5);
	clapTrap.attack("Lea");
	return (0);
}
