/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 19:09:28 by dev               #+#    #+#             */
/*   Updated: 2026/02/20 19:27:25 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "Constructor called for FragTrap " << this->_name << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "Constructor called for FragTrap " << this->_name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
	std::cout << "Copy constructor called for FragTrap " << this->_name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	
	std::cout << "Assignement operator called for FragTrap " << this->_name << std::endl;
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