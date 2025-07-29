int	ft_ultimate_range(int **range ,int min, int max)
{
	int	len;

	len = max- min;
	if(len <= 0)
	{
		*range = NULL;
		return 0;
	}
	int	*arr = malloc(len * sizeof(int))
	i = 0;
	while(min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	*range = arr;
	return len;
}
