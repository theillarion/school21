int	is_bad_symbol(char c)
{
	return (c != ' ' && !(c >= '1' && c <= '4'));
}

char	**good_combinations(void)
{
	char	**str;

	str = malloc(sizeof(char *) * 9);
	str[0] = "14";
	str[1] = "13";
	str[2] = "12";
	str[3] = "23";
	str[4] = "22";
	str[5] = "21";
	str[6] = "32";
	str[7] = "31";
	str[8] = "41";
	return (str);
}

int	is_bad_combination(char *str, int str_len)
{
	int		i;
	int		j;
	char	**gc;
	int		result;

	i = 0;
	gc = good_combinations();
	while (str[i] != '\0' && i < str_len - 8)
	{
		result = 0;
		j = 0;
		while (j < 9)
		{
			if (gc[j][0] == str[i] && gc[j][1] == str[i + 8])
				result = 1;
			j++;
		}
		if (result != 1)
			return (1);
		i += 2;
		if (i == 8)
			i += 8;
	}
	return (0);
}

int	passed_all_checks(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		if (is_bad_symbol(str[len]))
			return (-1);
		len++;
	}
	if (len == 0 || len != 31)
		return (-2);
	if (is_bad_combination(str, len))
		return (-3);
	return (1);
}
