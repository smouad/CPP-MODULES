/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:37:30 by msodor            #+#    #+#             */
/*   Updated: 2023/10/23 23:05:41 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <sstream>
#include <string>

void print(std::vector<std::vector<int> >& elems);
std::vector<std::vector<int> > parsInput(char **av);
void mergeInpairs(std::vector<std::vector<int> >& elems);
void mergeInsertion(std::vector<std::vector<int> >& elems);

#endif