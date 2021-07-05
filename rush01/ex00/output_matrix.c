void	output_string_struct(t_cmb	dest)
{
	write(1, &dest.x1, 1);
	write(1, " ", 1);
	write(1, &dest.x2, 1);
	write(1, " ", 1);
	write(1, &dest.x3, 1);
	write(1, " ", 1);
	write(1, &dest.x4, 1);
	write(1, "\n", 1);
}

void	output_struct(t_cmb *dest)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		output_string_struct(dest[i]);
		i++;
	}
}
