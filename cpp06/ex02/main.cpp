/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:17:19 by msodor            #+#    #+#             */
/*   Updated: 2023/10/13 00:36:38 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extention.hpp"

int main(){
  srand(time(NULL));
  Base *base = generate();
  identify(base);
  identify(*base);
  return (0);
}
