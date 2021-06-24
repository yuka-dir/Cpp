/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 14:00:38 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/24 14:11:59 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*new_zombie;

	new_zombie = newZombie("NEW");
	new_zombie->announce();
	randomChump("RANDOM");
	delete new_zombie;

	//system("leaks zombie");
	return (0);
}