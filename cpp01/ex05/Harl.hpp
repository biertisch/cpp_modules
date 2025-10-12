/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:35:02 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/12 12:17:12 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

#define N 4

class	Harl
{
	private:
		void debug();
		void info();
		void warning();
		void error();

	public:
		Harl();
		~Harl();
		void complain(std::string level);
};

#endif
