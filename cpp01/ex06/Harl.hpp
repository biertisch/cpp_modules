/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:35:02 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/12 12:17:44 by beatde-a         ###   ########.fr       */
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
		std::string levels_[N];
		void		debug();
		void		info();
		void		warning();
		void		error();
		int			getLevelIndex(const std::string& level);

	public:
		Harl();
		~Harl();
		void		complain(std::string level);
		void		filter(const std::string& level);
};

#endif
