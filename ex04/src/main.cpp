#include <ios>
#include <iostream>
#include <fstream>
#include <string>
#include "colors.hpp"

const bool DEBUG = false;

void	replace(std::string &content, const std::string s1, const std::string s2)
{
	// ? search s1
	int	content_size	= content.size();
	int	s1_size			= s1.size();
	int	s2_size			= s2.size();

	// * till content_size - s1_size to avoid getting out of range
	// ? replace s1 with s2
	for (int i = 0; i <= content_size - s1_size; ++i)
	{
		int j = 0;
		// * search s1 in content
		for (j = 0; j < s1_size; ++j)
			if (content[i + j] != s1[j])
				break;
		// ? s1 found at position i
		if (j == s1_size)
		{
			int replace_pos = i;
			j = 0;
			if (s2_size > s1_size)
			{
				content.resize(content_size + (s2_size - s1_size));
				i += (s2_size - s1_size);
				content_size = content.size();
				// * move the content to the right to make space for s2
				for (int k = content_size - 1; k >= replace_pos + s2_size; --k)
					content[k] = content[k - (s2_size - s1_size)];
			}
			else if (s2_size < s1_size)
			{
				content.resize(content_size - (s1_size - s2_size));
				i -= (s1_size - s2_size);
				content_size = content.size();
				// * move the content to the left to fill the gap left by s2
				for (int k = replace_pos + s2_size; k < content_size; ++k)
					content[k] = content[k + (s1_size - s2_size)];
			}
			// * copy s2 to the position of s1
			while (j < s2_size)
			{
				content[replace_pos++] = s2[j++];
				++i;
			}
		}
	}
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << RED "Usage: " << av[0] << " <filename> <s1> <s2>\n" RESET;
		return 1;
	}
	std::string	filename	= av[1];
	std::string	s1			= av[2];
	std::string	s2			= av[3];
	std::string content		= "";

	// ? open file
	std::fstream file;
	file.open(&filename[0], std::fstream::in);
	if (!file.is_open())
	{
		std::cerr << RED "Error when opening the file " << filename << "\n" RESET;
		return 1;
	}

	// ? read the content
	std::string line;
	while (std::getline(file, line))
		content += line + "\n";

	// ? close the file
	file.close();

	if (DEBUG)
	{
		std::cout << CYAN "Beore writing to file " << filename + ".replace" << "\n" RESET;
		std::cout << YELLOW << content << RESET;
	}
	
	// ? replace s1 with s2 in content
	replace(content, s1, s2);

	// ? write the content to a new file
	std::fstream outfile;
	outfile.open(& (filename + ".replace")[0], std::fstream::out);
	if (!outfile.is_open())
	{
		std::cerr << RED "Error when opening the file " << filename + ".replace" << "\n" RESET;
		return 1;
	}
	if (DEBUG)
	{
		std::cout << GREEN "Writing to file " << filename + ".replace" << "\n" RESET;
		std::cout << YELLOW << content << RESET;
	}
	// ? write the content to the new file
	outfile << content;
	// ? close the new file
	outfile.close();
	return 0;
}