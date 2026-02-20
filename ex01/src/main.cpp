/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 14:57:37 by dev               #+#    #+#             */
/*   Updated: 2026/02/20 19:00:06 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"
#include <iostream>

int main(void)
{
	ScavTrap bob("Bob");

	bob.attack("Pierre");
	bob.guardGate();

	bob.takeDamage(50);
	bob.beRepaired(50);

	return 0;
}