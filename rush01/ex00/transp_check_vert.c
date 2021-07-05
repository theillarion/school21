int	check_string(t_cmb dstr, t_cmb	src)
{
	if (dstr.x0 != src.x0 || dstr.x1 != src.x1 || dstr.x2 != src.x2
		|| dstr.x3 != src.x3 || dstr.x4 != src.x4 || dstr.x5 != src.x5)
		return (0);
	return (1);
}

int	check_strings(t_cmb *dstr, t_cmb *comb)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 24)
		{
			if (check_string(dstr[i], comb[j]) == 1)
			{
				k += 1;
				break ;
			}
			j++;
		}
		i++;
	}
	if (k == 4)
		return (1);
	return (0);
}

int	transp_dest(t_cmb *dest, t_cmb *cols, t_cmb	*combinations)
{
	t_cmb	*dstr;
	int		i;
	char	result[4][4];
	dstr = malloc(sizeof(t_cmb) * 4);

	i = 0;
	while (i < 4)
	{
		result[i][0] = dest[i].x1;
		result[i][1] = dest[i].x2;
		result[i][2] = dest[i].x3;
		result[i][3] = dest[i].x4;
		dstr[i].x0 = cols[i].x0;
		dstr[i].x5 = cols[i].x5;
		dstr[i].x1 = result[0][i];
		dstr[i].x2 = result[1][i];
		dstr[i].x3 = result[2][i];
		dstr[i].x4 = result[3][i];
		i++;
	}
	if (check_strings(dstr, combinations) == 1)
	{
		return (1);
	}
	else
		return (0);
}
