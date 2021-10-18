/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:21:07 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/10 19:54:29 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#include <iostream>

Animal::Animal()
{
	std::cout << "Called Animal Default Constructor" << std::endl;
}

Animal::Animal(const std::string type) : type_(type)
{
	std::cout << "Called Animal Constructor with arguments" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Called Animal Copy Constructor" << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
		this->type_ = other.getType();
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Called Animal Destructor" << std::endl;
}

std::string	Animal::getType() const
{
	return (type_);
}

void	Animal::makeSound() const
{
	std::cout << "(Animal sounds...)" << std::endl;
}
