/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 15:24:54 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/04 15:52:51 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>

int	main(void)
{
	//作成したいゾンビの数を入力する
	//Nに入れて、コンストラクタの引数に
	//N個のゾンビオブジェクトクラスを作成(Name random)
	//announce()をよぶ
	//delete
	ZombieHorde	*zombies;
	int			num_zombie;
	int			idx;

	std::cout << "Please enter the number of Zombies. >> ";
	std::cin >> num_zombie;
	zombies = new ZombieHorde(num_zombie);
	idx = 0;
	while (idx < num_zombie)
	{
		zombies[idx].announce();
		idx++;
	}
	delete[] zombies;
	return (0);
}