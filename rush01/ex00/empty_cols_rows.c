t_cmb	*empty_cmb(char *str, int offset)
{
	int		len;
	int		i;
	int		j;
	t_cmb	*result;

	i = 0;
	j = 0;
	len = 4;
	result = malloc(sizeof(t_cmb) * 4);
	while (i < len)
	{
		result[i].x0 = str[j + offset];
		result[i].x5 = str[j + offset + 8];
		i++;
		j += 2;
	}
	return (result);
}

t_cmb	*empty_cols(char *str)
{
	return (empty_cmb(str, 0));
}

t_cmb	*empty_rows(char *str)
{
	return (empty_cmb(str, 16));
}
