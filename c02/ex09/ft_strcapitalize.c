int	ft_is_letters_or_digits(const char *str, const int i)
{
	if (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z')
		&& !(str[i] >= '0' && str[i] <= '9'))
		return (1);
	return (0);
}

void	ft_inizilization(int *second_flag, int *count)
{
	*second_flag = 1;
	*count = 0;
}

char	*ft_strcapitalize(char	*str)
{
	int	i;
	int	is_first;

	inizilization(&is_first, &i);
	while (str[i] != '\0')
	{
		is_first = 1;
		while (str[i] != '\0')
		{
			if (is_letters_or_digits(str, i) == 1)
				break ;
			if (is_first == 1 && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (is_first == 0 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			is_first = 0;
			i++;
		}
		i++;
	}
	return (str);
}
