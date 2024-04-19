/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:55:32 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/19 18:21:49 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP

# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

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
		void	whoAmI(void) const;
		using	ScavTrap::attack;
};

#endif
