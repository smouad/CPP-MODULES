/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:53:22 by msodor            #+#    #+#             */
/*   Updated: 2023/10/10 00:25:47 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
  Form form("Form 1", 1, 1);
  Bureaucrat bureaucrat("hassan", 1);
  Form form2("Form 2", 2, 2);
  Bureaucrat bureaucrat2("sami", 3);

  std::cout << form;
  std::cout << form2;
  std::cout << bureaucrat;
  std::cout << bureaucrat2;

  bureaucrat.signForm(form);
  bureaucrat2.signForm(form2);

  std::cout << form;
  std::cout << form2;
  return 0;
}