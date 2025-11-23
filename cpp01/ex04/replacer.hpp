/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:33:24 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/23 17:56:30 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
#define REPLACER_HPP

#include <fstream>
#include <iostream>
#include <string>

bool processText(std::ifstream& infile, std::ofstream& outfile, const std::string& s1, const std::string& s2);
void processLine(std::string& line, const std::string& s1, const std::string& s2);
void replace(std::string& dest, size_t pos, size_t len, const std::string& s);
bool openFiles(std::ifstream& infile, std::ofstream& outfile, const std::string& infileName, const std::string& outfileName);
bool resetOutfile(std::ofstream& outfile, const std::string& outfileName);
void closeFiles(std::ifstream& infile, std::ofstream& outfile);

#endif