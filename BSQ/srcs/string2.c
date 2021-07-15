#include "bsq.h"

int	ft_char_is_printable(char c)
{
	if (!(c >= ' ' && c <= '~'))
		return (0);
	return (1);
}
