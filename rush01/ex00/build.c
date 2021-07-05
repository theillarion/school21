void	build(t_cmb	*comb, t_cmb	*row, t_cmb	*cols, int	j)
{
	int 	i;

	i = 0;
	while(i < 24)
	{
		if (row[j].x0 == comb[i].x0
			&& row[j].x5 == comb[i].x5)
		{
			dest[j].x1 = comb[i].x1;
			dest[j].x2 = comb[i].x2;
			dest[j].x3 = comb[i].x3;
			dest[j].x4 = comb[i].x4;

			if (j < 3)
			{
			 	build(comb, row, cols, (j + 1));
			}
			if (j == 3)
			{
			 	transp_dest(dest, cols, comb);
				break;
			}
		}
		i++;
	}
}
