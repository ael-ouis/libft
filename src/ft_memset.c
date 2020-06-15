#include <stdio.h>
#include <string.h>

void *ft_memset(void *str, int c, size_t n)
{
	unsigned char *tab;

	tab = str;
	while (n-- > 0)
		*tab++ = c;
	return (str);
}

/*int main()
{
	char string[10] = "blablabla";
	char string2[10] = "blablabla";

	void *ptr = &string;
	void *ptr2 = &string2;

	ft_memset(ptr, 'X', 1 * sizeof(char));
	memset(ptr2, 'X', 1 * sizeof(char));
	printf("\n%s", string);
	printf("\n%s", string2);
}*/
