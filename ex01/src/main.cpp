/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 14:57:37 by dev               #+#    #+#             */
/*   Updated: 2026/02/20 16:03:16 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include <iostream>

int main(void)
{
	ClapTrap bob("Bob");
	
	bob.takeDamage(5);
	bob.beRepaired(3);
	for (int i = 0; i < 10; i++)
		bob.attack("Billy");	
}