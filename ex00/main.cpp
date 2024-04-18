/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:22:48 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/18 18:36:15 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("Lea");

	clapTrap.attack("Pikachu");
	clapTrap.takeDamage(5);
	clapTrap.beRepaired(3);
	clapTrap.attack("Pikachu");
	clapTrap.takeDamage(10);
	clapTrap.beRepaired(5);
	return (0);
}
