/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:51:03 by msodor            #+#    #+#             */
/*   Updated: 2023/09/21 15:51:05 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

class FragTrap:public ClapTrap{
public:
    /* constructors */
    FragTrap();
    FragTrap(const std::string name);
    FragTrap(const FragTrap& src);

    /* distractors */
    ~FragTrap();

    /* operators */
    FragTrap& operator=(const FragTrap& src);

    /* methods */
    void highFivesGuys(void);
};
