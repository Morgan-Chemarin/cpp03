/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 14:57:37 by dev               #+#    #+#             */
/*   Updated: 2026/02/20 19:36:15 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"
#include <iostream>

int main(void)
{
	FragTrap titouan("Titouan");
	titouan.highFivesGuys();

	titouan.attack("Axel");

	return 0;
}