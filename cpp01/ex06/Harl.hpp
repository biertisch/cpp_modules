/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:35:02 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/24 15:44:35 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class	Harl
{
	private:
		void		debug();
		void		info();
		void		warning();
		void		error();

		static int getLevelIndex(const std::string& level);

	public:
		Harl();
		~Harl();
		void		complain(std::string level);
		void		filter(const std::string& level);
};

#endif
