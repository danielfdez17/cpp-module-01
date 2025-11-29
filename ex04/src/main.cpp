#include <ios>
#include <iostream>
#include <fstream>
#include <string>
// #include <bits/stdc++.h>

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
	std::string line;
	while (getline(file, line))
	{
		content += line + "\n";
		std::cout << line << "\n";
	}
	// ? search s1
	for (size_t i = 0; i <= content.size() - s1.size(); ++i)
	{
		size_t s1_size = s1.size();
		size_t j;
		for (j = 0; j < s1_size; ++j)
			if (content[i + j] != s1[j])
				break;
		// ? replace s1 with s2
		if (j == s1_size)
		{
			// ? write the content in other file
			int replace_pos = i + s1_size - 1;
			j = 0;
			while (j < s2.size())
				content[replace_pos++] = s2[j++];
		}
	}
	// ? close the file
	file.close();
	return 0;
}