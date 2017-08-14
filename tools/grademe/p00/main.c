#include <stdlib.h>
#include <unistd.h>

void	sastantua(int size);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	sastantua(atoi(argv[1]));
	return (0);
}
