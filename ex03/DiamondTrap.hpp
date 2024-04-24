/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:32:59 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/24 14:20:26 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP

# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string _name;
	public:
		//constructeur par default
		DiamondTrap ();
		//constructeur par name
		DiamondTrap (const std::string &name);
		//constructeur par copie
		DiamondTrap (const DiamondTrap& copy);
		//destructeur
		~DiamondTrap(void);
		//operateur d'affection
		DiamondTrap& operator=(const DiamondTrap& copy);
		//methods
		void	attack(const std::string& target);
		void	whoAmI(void);

};

#endif
