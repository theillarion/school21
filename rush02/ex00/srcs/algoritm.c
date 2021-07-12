#include "header.h"

int	ft_atoi_2(char *str)
{
	int		i;
	int		result;
	int		operator;
	int		is_num;

	i = 0;
	is_num = 0;
	i += ft_shift_wspace(str + i);
	operator = ft_operator(str + i);
	i += ft_shift_plus_minus(str + i);
	result = 0;
	while ('0' <= str[i] && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		is_num = 1;
		i++;
	}
	if (!is_num)
		return ('\0');
	result *= operator;
	return (result);
}

char	*ft_itoa(int nbr)
{
	char	*result;
	int		len;

	len = get_len(nbr);
	result = malloc(sizeof(char) * (len + 1));
	result[len] = '\0';
	if (nbr < 0)
		result[0] = '-';
	else if (nbr == 0)
		result[0] = '0';
	while (nbr != 0)
	{
		--len;
		nbr = nbr / 10;
	}
	return (result);
}

void	ft_print_nbr_in_words(t_map *dict, int strlen, char *str, int dict_len)
{
	int		i;
	int		j;
	int		k;
	int		found;
	char	*tmp_str;

	i = 0;
	k = 0;
	tmp_str = malloc(10);
	while (strlen)
	{
		j = 0;
		found = 0;
		while (j < dict_len)
		{
			if (strlen > 2)
			{
				if (dict[j].size == strlen)
				{
					tmp_str[k] = str[i];
					tmp_str[++k] = '\0';
					tmp_str = ft_itoa(ft_atoi_2(tmp_str));
					k = ft_strlen(tmp_str);
					ft_print_nbr_in_words(dict, k, tmp_str, dict_len);
					while (k)
						tmp_str[k--] = '\0';
					ft_stdout(dict[j].string);
					ft_stdout(" ");
					found = 1;
					break ;
				}
			}
			else if (strlen == 2)
			{
				if (dict[j].size == strlen
					&& (str[i] - '0') == dict[j].number[0])
				{
					if (str[i] >= '2')
					{
						ft_stdout(dict[j].string);
						ft_stdout(" ");
						found = 1;
						break ;
					}
					else if (str[i] < '2'
						&& (str[i + 1] - '0') == dict[j].number[1])
					{
						ft_stdout(dict[j].string);
						ft_stdout(" ");
						i++;
						break ;
					}
				}
			}
			else if (strlen == 1)
			{
				if (dict[j].size == strlen
					&& (str[i] - '0') == dict[j].number[0])
				{
					ft_stdout(dict[j].string);
					ft_stdout(" ");
					found = 1;
					break;
				}
			}
			j++;
		}
		if (!found)
		{
			tmp_str[k] = str[i];
			k++;
		};
		strlen--;
		i++;
	}
	free(tmp_str);
}
