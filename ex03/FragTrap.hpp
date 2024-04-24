/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:12:08 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/24 15:04:07 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP

# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class	FragTrap : virtual public ClapTrap
{
	protected:
		static const int	_subHitPoints;
		static const int	_subEnergyPoints;
		static const int	_subAttackDamage;
	public:
		//constructeur par default
		FragTrap ();
		//constructeur par name
		FragTrap (const std::string &name);
		//constructeur par copie
		FragTrap (const FragTrap& copy);
		//destructeur
		~FragTrap(void);
		//operateur d'affection
		FragTrap& operator=(const FragTrap& copy);
		//methods
		void	highFivesGuys(void);
};

#endif
