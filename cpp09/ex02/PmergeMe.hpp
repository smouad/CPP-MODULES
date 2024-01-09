/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:37:30 by msodor            #+#    #+#             */
/*   Updated: 2024/01/09 22:01:04 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>
#include <utility>
#include <sstream>
#include <string>

extern int compDeque;
extern int compVectore;

/* vector */
void printVector(std::vector<std::vector<int> >& elems);
std::vector<std::vector<int> > parsInput(char **av);
void mergeInsertion(std::vector<std::vector<int> >& elems);

/* deque */
void printDeque(std::deque<std::deque<int> >& elems);
std::deque<std::deque<int> > parsInputDeque(char **av);
void mergeInsertionDeque(std::deque<std::deque<int> >& elems);

std::vector<int> jacobStahlSeq(int n);
#endif