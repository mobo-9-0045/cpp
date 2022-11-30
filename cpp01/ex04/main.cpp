/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:53:55 by aomman            #+#    #+#             */
/*   Updated: 2022/11/29 17:47:26 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>

void	ft_replace (char **argv, std::string instring)
{
	std::string outfname;
	std::string str1 = argv[2];
	std::string str2 = argv[3];
	size_t		index;
	int 		i;

	outfname = std::string(argv[1]) + ".replace";
	std::ofstream outf(outfname.c_str());
	if (outf.fail())
		std::cout << "Error : Outout file" << std::endl;
	i = 0;
	while (i < (int)instring.size())
	{
		index = instring.find(str1, i);
		if ((int)index != -1 && (int)index == i)
		{
			outf << str2;
			i = i + str1.size() - 1;
		}
		else
			outf << instring[i];
		i++;
	}
	outf.close();
}

int main(int argc, char **argv)
{
	std::string instring;
	char		c;

	if (argc == 4)
	{
		std::ifstream inf(argv[1]);
		if (!inf.is_open())
			std::cout << argv[1] << " no such file or directory" << std::endl;
		while (!inf.eof() && inf >> std::noskipws >> c)
			instring += c;
		inf.close();
		ft_replace(argv, instring);
	}
	else
		std::cout << "file.replace + s1 + s2" << std::endl;
	return (0);
}
