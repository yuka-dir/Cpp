/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:30:47 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/04 19:52:36 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>
#include <iostream>

Brain::Brain(void)
{
}

Brain::~Brain(void)
{
}

/*
**	Returns a string containing the brain’s address in memory,
**	in hexadecimal format, prefixed by 0x (For example, "0x194F87EA").
*/
Brain	*Brain::identify(void)
{
	Brain		*pBrain = this;

	// std::cout << pBrain << std::endl;
	return (this);
	//return ("test");
}
