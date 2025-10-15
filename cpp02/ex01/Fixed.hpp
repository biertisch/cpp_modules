/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:29:51 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/15 16:04:21 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					raw_;
		static const int	fractionalBits_ = 8;

	public:
		Fixed();
		Fixed(const int real);
		Fixed(const float real);
		Fixed(const Fixed& other);
		Fixed&	operator=(const Fixed& other);
		~Fixed();
		int				getRawBits() const;
		void			setRawBits(int const raw);
		int				toInt() const;
		float			toFloat() const;
};

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed);

#endif