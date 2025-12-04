#pragma once
#ifndef __HARL__
#define __HARL__

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

#include <string>

typedef struct s_pair
{
	std::string	key;
	void		(*value)(void);
} t_pair;

typedef short unsigned int sui;

class Harl
{
private:
	static const sui	MAX_OPS = 4;
	t_pair				map[MAX_OPS];

	static void			debug(void);
	static void			info(void);
	static void			warning(void);
	static void			error(void);

public:
	// * Constructor
				Harl(void);
	
	// * Public Methods
	void		complain(const std::string level) const;

};

#endif // __HARL__