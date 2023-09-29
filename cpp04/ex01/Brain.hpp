/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:01:21 by msodor            #+#    #+#             */
/*   Updated: 2023/09/27 15:32:26 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
private:
	std::string ideas[100];
public:
	/* constructors */
	Brain();
	Brain(const Brain& src);

	/* operators */
	Brain& operator=(const Brain& src);

	/* destructor */
	~Brain();
};

#endif