/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 19:09:21 by dev               #+#    #+#             */
/*   Updated: 2026/02/20 19:20:34 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "../inc/ClapTrap.hpp"
#include <string>
#include <iostream>

class FragTrap: public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& other);
	FragTrap& operator=(const FragTrap& other);
	~FragTrap();

	void highFivesGuys(void);
};

#endif