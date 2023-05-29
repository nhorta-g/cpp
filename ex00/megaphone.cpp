#include <iostream>
#include <cstring>

int	main(int ac, char **av)
{
	(void)ac;

	int	i = 1;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

	while (av[i] && i < ac)
	{
		for (int j = 0; j < (int)strlen(av[i]); j++)
			std::cout << (char)toupper(av[i][j]);
		i++;
	}
	std::cout << std::endl;
}
