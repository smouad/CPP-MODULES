/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:01:03 by msodor            #+#    #+#             */
/*   Updated: 2023/09/03 16:35:34 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon			weapon;
public:
	HumanB();
	HumanB(std::string name);
	~HumanB();
	void	attack();
	void setWeapon(Weapon wepon);
};