/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:28:45 by mobo              #+#    #+#             */
/*   Updated: 2022/12/28 14:43:44 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<cstdlib>
#include <string>

int	check_point(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '.')
			return (1);
		i++;
	}
	return (0);
}

void	convert_to_int(char *str)
{
	int	stoi;

	stoi = std::atoi(str);
	if (std::isprint(static_cast<unsigned char>(stoi)))
		std::cout << "char: " << static_cast<char>(stoi) << std::endl;
	else
		std::cout << "char : Non diplayable" << std::endl;
	std::cout << "int: " << stoi << std::endl;
	std::cout << "float: " << static_cast<float>(stoi) << ".0f" <<std::endl;
	std::cout << "double: " << static_cast<double>(stoi) << ".0" <<std::endl;
}

void	convert_to_float(char *str)
{
	float stof;

	stof = std::atof(str);
	if (std::isprint(static_cast<unsigned char>(stof)))
		std::cout << "char: " << static_cast<char>(stof) << std::endl;
	else
		std::cout << "char : Non diplayable" << std::endl;
	std::cout << "int: " << static_cast<int>(stof) << std::endl;
	std::cout << "float: " << stof << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(stof) << std::endl;
}

void	nan_print(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (argv[1] == static_cast<std::string>("nan"))
		{
			nan_print();
			return (0);
		}
		int check = check_point(argv[1]);
		if (check == 0)
			convert_to_int(argv[1]);
		if (check == 1)
			convert_to_float(argv[1]);
	}
	return (0);
}
