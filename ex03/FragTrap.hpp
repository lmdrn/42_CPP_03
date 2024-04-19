/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:12:08 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/19 15:56:56 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP

# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class	FragTrap : public ClapTrap
{
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
