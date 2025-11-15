/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:20:02 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/15 12:05:25 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _brainHPP
#define _brainHPP

#include <iostream>
#include <string>

class Brain
{
	private:
		std::string _ideas[100];

	public:
		Brain();
		Brain(const std::string& type);
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
		~Brain();

		std::string getIdea(int index) const;
		void setIdea(int index, const std::string &idea);
};

#endif