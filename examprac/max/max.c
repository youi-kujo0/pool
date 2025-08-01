int	max(int *tab, unsigned int len)
{
	int	i;
	int	tmp;

	i = 0;
	if (len == 0)
		return 0;
	tmp = tab[0];
	while (i <  len)
	{
		if (tmp < tab[i])
			tmp = tab[i];
		i++;
	}
	return tmp;
}
