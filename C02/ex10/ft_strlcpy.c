unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	int	length;

	length = 0;
	i = 0;
	while(i < size - 1 && src[i] != 0) 
	{
		dest[i] = src[i];
		i++;
	}
	if(size > 0)
		dest[i] = 0;
	while(src[length] != 0)
	{
		length++;
	}
	return (length);
}
