/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:27:38 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/19 17:37:48 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class	ScavTrap : public ClapTrap
{
	public:
		//constructeur par default
		ScavTrap ();
		//constructeur par name
		ScavTrap (const std::string &name);
		//constructeur par copie
		ScavTrap (const ScavTrap& copy);
		//destructeur
		~ScavTrap(void);
		//operateur d'affection
		ScavTrap& operator=(const ScavTrap& copy);
		//methods
		void	guardGate();
};

#endif

