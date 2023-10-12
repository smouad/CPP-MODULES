/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extention.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:57:15 by msodor            #+#    #+#             */
/*   Updated: 2023/10/12 21:21:08 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXTENTION_HPP
# define EXTENTION_HPP

#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif