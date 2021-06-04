/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 22:05:59 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/04 14:20:20 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIEEVENT_HPP_
# define _ZOMBIEEVENT_HPP_

# include "Zombie.hpp"
# include <string>

# define STORE_ZOMBIE_NUM 6
# define CREATE_ZOMBIE_NUM 3

class ZombieEvent : public Zombie {
private:
	std::string	m_type;
public:
	ZombieEvent();
	~ZombieEvent();
	int		createRandomNum();
	void	setZombieType(std::string type);
	Zombie* newZombie(std::string name);
	Zombie*	randomChump();
};

#endif // _ZOMBIEEVENT_HPP_