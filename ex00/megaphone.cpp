#include <iostream>
#include <cstring>

int	main(int ac, char **av)
{
	(void)ac;

	int	i = 1;
	while (av[i] && i < ac)
	{
		for (int j = 0; j < (int)strlen(av[i]); j++)
			std::cout << (char)toupper(av[i][j]);
		std::cout << std::endl;
		i++;
	}
}
