#include <string>
#include <iostream>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

#define SHOW(a) std::cout << #a " :";

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << GREEN; SHOW(&brain); std::cout << &brain << "\n" RESET;
	std::cout << YELLOW; SHOW(stringPTR); std::cout << stringPTR << "\n" RESET;
	std::cout << CYAN; SHOW(&stringREF); std::cout << &stringREF << "\n" RESET;

	std::cout << GREEN; SHOW(brain); std::cout << brain << "\n" RESET;
	std::cout << YELLOW; SHOW(*stringPTR); std::cout << *stringPTR << "\n" RESET;
	std::cout << CYAN; SHOW(stringREF); std::cout << stringREF << "\n" RESET;
	return 0;
}