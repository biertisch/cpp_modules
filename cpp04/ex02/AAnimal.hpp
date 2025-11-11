/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:59:04 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/11 12:21:26 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
	protected:
		std::string type_;

	public:
		AAnimal();
		AAnimal(const std::string& type);
		AAnimal(const AAnimal& other);
		AAnimal& operator=(const AAnimal& other);
		virtual ~AAnimal();

		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif