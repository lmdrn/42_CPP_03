/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:47:44 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/19 15:06:31 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	scav("ScavLea");
	ClapTrap	clap("ClapLea");
	//-- TEST DEFAULT CONSTRUCTOR
	//ScavTrap	scav2;
	//-- TEST COPY CONSTRUCTOR
	//ScavTrap	scav3 = scav;
	scav.guardGate();
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
