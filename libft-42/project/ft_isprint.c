#include "libft.h"

int isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}