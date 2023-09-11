/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:00:13 by msodor            #+#    #+#             */
/*   Updated: 2023/09/11 18:31:17 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed{
private:
	int	fixedPoint;
	static const int	bits;
public:
	Fixed();
	Fixed(const Fixed& src);
	Fixed& operator=(const Fixed& rhs);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
};