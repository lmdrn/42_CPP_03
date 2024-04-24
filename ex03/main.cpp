/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:10:08 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/24 14:33:10 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	FragTrap	frag("FragLea");
	ScavTrap	scav("ScavLea");
	ClapTrap	clap("ClapLea");
	DiamondTrap	diamond("DiamondLea");
	//-- TEST DEFAULT CONSTRUCTOR
	//ScavTrap	scav2;
	//-- TEST COPY CONSTRUCTOR
	//ScavTrap	scav3 = scav;
	diamond.whoAmI();
	clap.attack("Enemy");
	scav.attack("Nemesis");
	scav.takeDamage(5);
	scav.beRepaired(3);
	scav.takeDamage(10);
	clap.takeDamage(11);
	clap.attack("Zooombie");
	scav.attack("Lea");
	return (0);
}
