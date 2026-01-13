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

const std::string DEBUG	=	"DEBUG";
const std::string INFO =	"INFO";
const std::string WARNING =	"WARNING";
const std::string ERROR =	"ERROR";

typedef short unsigned int sui;

const sui	MAX_OPS = 4;

typedef struct s_pair
{
	std::string	key;
	void		(*value)(void);
} t_pair;

class Harl
{
private:
	t_pair				map[MAX_OPS];

	static void			debug(void);
	static void			info(void);
	static void			warning(void);
	static void			error(void);

public:
	Harl(void);
	void				complain(const std::string &level) const;

};

#endif // __HARL__