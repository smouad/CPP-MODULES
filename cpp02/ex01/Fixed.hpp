/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:22:31 by msodor            #+#    #+#             */
/*   Updated: 2023/10/12 15:14:21 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

class Fixed{
private:
	int	fixedPoint;
	static const int bits;
public:
	Fixed();
	Fixed(const Fixed& src);
	Fixed(const int value);
	Fixed(const float value);
	Fixed& operator=(const Fixed& rhs);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};
// std::ostream& operator<<(std::ostream& os, const Fixed& fixed);