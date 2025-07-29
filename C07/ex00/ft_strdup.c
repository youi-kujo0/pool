char	*ft_strdup(char *src)
{
	int	len;

	len = 0;
	while(src[len])
		len++;
	char *dest = malloc((len + 1) * sizeof(char));
	len = 0;
	while(src[len])
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = 0;
	return dest;
}
