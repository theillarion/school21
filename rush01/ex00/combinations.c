void	end_make_strings(char **res_strings)
{
	res_strings[19] = "312432";
	res_strings[20] = "321341";
	res_strings[21] = "323141";
	res_strings[22] = "313241";
	res_strings[23] = "412341";
}

char	**make_strings(int nr_of_combinations)
{
	char	**res_strings;

	res_strings = malloc(sizeof(char *) * nr_of_combinations);
	res_strings[0] = "143214";
	res_strings[1] = "143123";
	res_strings[2] = "141323";
	res_strings[3] = "142313";
	res_strings[4] = "141232";
	res_strings[5] = "142132";
	res_strings[6] = "214323";
	res_strings[7] = "224313";
	res_strings[8] = "234213";
	res_strings[9] = "214232";
	res_strings[10] = "224132";
	res_strings[11] = "234122";
	res_strings[12] = "232412";
	res_strings[13] = "231422";
	res_strings[14] = "221432";
	res_strings[15] = "231241";
	res_strings[16] = "232141";
	res_strings[17] = "323412";
	res_strings[18] = "313422";
	end_make_strings(res_strings);
	return (res_strings);
}

t_cmb	*make_combinations(void)
{
	t_cmb	*combinations;
	int		nr_of_combinations;
	char	**comb_strings;
	int		i;

	nr_of_combinations = 24;
	combinations = malloc(sizeof(t_cmb) * 24);
	comb_strings = make_strings(nr_of_combinations);
	i = 0;
	while (i < nr_of_combinations)
	{
		combinations[i].x0 = comb_strings[i][0];
		combinations[i].x1 = comb_strings[i][1];
		combinations[i].x2 = comb_strings[i][2];
		combinations[i].x3 = comb_strings[i][3];
		combinations[i].x4 = comb_strings[i][4];
		combinations[i].x5 = comb_strings[i][5];
		i++;
	}
	return (combinations);
}
