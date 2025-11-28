#include <ios>
#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>

int main(int ac, char **av)
{
	if (ac != 4)
		return 1;
	std::string	filename	= av[1];
	std::string	s1			= av[2];
	std::string	s2			= av[3];
	std::string content;

	// ? open file
	std::ifstream file(filename);
	if (!file.is_open())
	{
		std::cerr << "Error when opening the file " << filename << "\n";
		return 1;
	}
	// ? read the content
	while (getline(file, content))
		std::cout << content << "\n";
	// ? search s1
	// size_t size = content.size();
	// for (size_t i = 0; i < size; ++i)
	// {
	// 	size_t s1_size = s1.size();
	// 	size_t j;
	// 	for (j = 0; j < s1_size; ++j)
	// 		if (content[i] != s1[j])
	// 			break;
	// 	if (j == s1_size)
	// 	{
	// 		int aux = i;
	// 		while (j--)
	// 			content[aux--] = s2[j];
	// 	}
	// }
	// ? replace s1 with s2
	// ? write the content in other file

	file.close();
	return 0;
}