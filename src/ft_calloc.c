#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr;

	ptr = s;
	while (n--)
		*(ptr++) = (unsigned char)c;
	return (s);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *tab;

	if (!(tab = malloc(sizeof(size) * nmemb)))
		return (NULL);
	ft_memset(tab, 0, nmemb);
	return (tab);
}