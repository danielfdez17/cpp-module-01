#include <string>
#include <iomanip>
#include <iostream>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

#define SHOW(a) std::cout << #a " : ";

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << GREEN;		SHOW(&brain);		std::cout << std::setw(20) << &brain << "\n" RESET;
	std::cout << YELLOW;	SHOW(stringPTR);	std::cout << std::setw(17) << stringPTR << "\n" RESET;
	std::cout << CYAN;		SHOW(&stringREF);	std::cout << std::setw(16) << &stringREF << "\n" RESET;

	std::cout << GREEN;		SHOW(brain);		std::cout << std::setw(23) << brain << "\n" RESET;
	std::cout << YELLOW;	SHOW(*stringPTR);	std::cout << std::setw(18) << *stringPTR << "\n" RESET;
	std::cout << CYAN;		SHOW(stringREF);	std::cout << std::setw(19) << stringREF << "\n" RESET;
	return 0;
}