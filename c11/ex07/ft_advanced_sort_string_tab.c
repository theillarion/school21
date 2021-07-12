void	ft_swap(char	**arg1, char	**arg2)
{
	char	*temp;

	temp = *arg1;
	*arg1 = *arg2;
	*arg2 = temp;
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_advanced_sort_string_tab(char	**tab, int(*cmp)(char *, char *))
{
	int		i;
	int		j;

	i = 0;
	while (tab[i] != 0)
	{
		j = i + 1;
		while (tab[j] != 0)
		{
			if ((*cmp)(tab[i], tab[j]) > 0)
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}
