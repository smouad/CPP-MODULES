/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:22:31 by msodor            #+#    #+#             */
/*   Updated: 2023/09/14 18:26:20 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed{
private:
	int	fixedPoint;
	static const int bits;
public:
	/*contruc*/
	Fixed();
	Fixed(const Fixed& src);
	Fixed(const int value);
	Fixed(const float value);
	/*distruc*/
	~Fixed();
	/*assingement operators*/
	Fixed& operator=(const Fixed& rhs);
	/*comparison operators*/
	bool operator>(Fixed& rhs);
	bool operator>=(Fixed& rhs);
	bool operator<(Fixed& rhs);
	bool operator<=(Fixed& rhs);
	bool operator==(Fixed& rhs);
	bool operator!=(Fixed& rhs);
	/*arithmetic operators*/
	float operator+(Fixed& rhs);
	float operator-(Fixed& rhs);
	float operator*(Fixed& rhs);
	float operator/(Fixed& rhs);
	/*increment/decrement*/
	Fixed& operator++();
	Fixed& operator++(int);
	Fixed& operator--();
	Fixed& operator--(int);
	/*getter*/
	int getRawBits(void) const;
	/*setter*/
	void setRawBits(int const raw);
	/*methods*/
	float toFloat(void) const;
	int toInt(void) const;
	Fixed& min(Fixed& first, Fixed& second);
	Fixed& max(Fixed& first, Fixed& second);
	const Fixed& min(const Fixed& first, const Fixed& second);
	const Fixed& max(const Fixed& first, const Fixed& second);
};
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);