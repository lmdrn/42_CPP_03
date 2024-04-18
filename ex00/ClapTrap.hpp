/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:18:34 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/18 18:53:36 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class	ClapTrap
{
	private:
		std::string	_name;
		int		_hitPoints;
		int		_energyPoints;
		int		_attackDamage;
	public:
		//constructeur par default
		ClapTrap(const std::string& _name);
		//constructeur par copie
		ClapTrap(const ClapTrap& copy);
		//destructeur
		~ClapTrap(void);
		//operateur d'affection
		ClapTrap& operator=(const ClapTrap& copy);
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif
