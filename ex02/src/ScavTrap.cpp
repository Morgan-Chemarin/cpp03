/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 17:58:38 by dev               #+#    #+#             */
/*   Updated: 2026/02/20 19:20:39 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << "Constructor called for ScavTrap " << this->_name << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << "Constructor called for ScavTrap " << this->_name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
	std::cout << "Copy constructor called for ScavTrap " << this->_name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
		ClapTrap::operator=(other);
		
	std::cout << "Assignement operator called for ScavTrap " << this->_name << std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called for ScavTrap " << _name << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " can't attack!" << std::endl;
	return;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}