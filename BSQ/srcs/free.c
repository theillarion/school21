#include "bsq.h"

int	return_free(char	*buff)
{
	if (buff != NULL)
		free(buff);
	return (-1);
}

int	return_free_2(char	*buff1, char	*buff2)
{
	if (buff1 != NULL)
		free(buff1);
	if (buff2 != NULL)
		free(buff2);
	return (-1);
}
