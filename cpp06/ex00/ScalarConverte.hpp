/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:05:14 by msodor            #+#    #+#             */
/*   Updated: 2023/10/12 20:20:34 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <climits>
# include <cstdlib>
# include <string>
# include <cctype>
# include <iomanip>

class ScalarConverter{
private:
	ScalarConverter();
public:
	ScalarConverter(const ScalarConverter& src);
	~ScalarConverter();
	ScalarConverter &operator=(const ScalarConverter& rhs);
	static void	convert(std::string str);
};


#endif