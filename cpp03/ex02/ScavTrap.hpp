/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:50:34 by msodor            #+#    #+#             */
/*   Updated: 2023/09/21 15:50:35 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap{
public:
    /* constructors */
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& src);

    /* overload operator */
    ScavTrap& operator=(const ScavTrap& src);

    /* methostds */
    void attack(const std::string& target);
    void guardGate(void);

    /* distuctor */
    ~ScavTrap();
};
