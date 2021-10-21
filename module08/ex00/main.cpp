/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:48:18 by ysaito            #+#    #+#             */
/*   Updated: 2021/10/21 20:00:03 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "easyfind.hpp"

int	main()
{
	int					array_i[] = {-1, 4, 2, 3, 2, -5};
	std::vector<int>	vector_i(array_i, array_i + (sizeof(array_i) / sizeof(int)));

	try
	{
		::easyfind(vector_i, 2);
		::easyfind(vector_i, 10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}