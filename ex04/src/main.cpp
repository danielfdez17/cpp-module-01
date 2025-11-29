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
	std::fstream file;
	file.open(&filename[0], std::fstream::in);
	if (!file.is_open())
	{
		std::cerr << "Error when opening the file " << filename << "\n";
		return 1;
	}
	// ? read the content
	std::string line;
	while (std::getline(file, line))
		content += line + "\n";
	// ? search s1
	size_t content_size = content.size();
	size_t s1_size = s1.size();
	for (size_t i = 0; i <= content_size - s1_size; ++i)
	{
		size_t j;
		for (j = 0; j < s1_size; ++j)
			if (content[i + j] != s1[j])
				break;
		// ? replace s1 with s2
		if (j == s1_size)
		{
			// ? write the content in other file
			int replace_pos = i;
			j = 0;
			size_t s2_size = s2.size();
			if (s2_size > s1_size)
			{
				content.resize(content_size + (s2_size - s1_size));
				content_size = content.size();
				for (size_t k = content_size - 1; k >= replace_pos + s2_size; --k)
					content[k] = content[k - (s2_size - s1_size)];
			}
			else if (s2_size < s1_size)
			{
				content.resize(content_size - (s1_size - s2_size));
				content_size = content.size();
				for (size_t k = replace_pos + s2_size; k < content_size; ++k)
					content[k] = content[k + (s1_size - s2_size)];
			}
			while (j < s2_size)
				content[replace_pos++] = s2[j++];
		}
	}
	// ? close the file
	file.close();
	std::fstream outfile;
	outfile.open(& (filename + ".replace")[0], std::fstream::out);
	if (!outfile.is_open())
	{
		std::cerr << "Error when opening the file " << filename + ".replace" << "\n";
		return 1;
	}
	outfile << content;
	outfile.close();
	return 0;
}