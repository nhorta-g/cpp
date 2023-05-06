#include <iostream>
#include <cstring>

int	main(int ac, char **av)
{
	int	i = 0;
	while (av[i])
	{
		for (int j = 0; j < strlen(av[i]); j++)
			putchar(toupper(av[i][j]));
		i++;
	}
}
