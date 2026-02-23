/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemari <mchemari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 19:09:28 by dev               #+#    #+#             */
/*   Updated: 2026/02/23 15:58:46 by mchemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "Constructor called for FragTrap " << this->_name << std::endl;

	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "Constructor called for FragTrap " << this->_name << std::endl;

	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
	std::cout << "Copy constructor called for FragTrap " << this->_name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "Assignement operator called for FragTrap " << this->_name << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called for FragTrap " << this->_name << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Ask for a positive high-fives!" << std::endl;
}