#include <stdio.h>
#include <stdlib.h>

int is_prime(int nb)
{
	int i;

	i = 2;
	while(i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_atoi(char *s)
{
	int		r;

	r = 0;
	while (*s >= '0' && *s <= '9')
		r = r * 10 + *s++ - '0';
	return (r);
}

int add_prime_sum(int nb)
{
	int i;
	int prime;

	i = 2;
	prime = 0;
	while (i <= nb)
	{
		if (is_prime(i) == 1)
			prime += i;
		i++;
	}
	return (prime);
}

int main(int ac, char **av)
{
	if (ac == 2)
		printf("%i", add_prime_sum(ft_atoi(av[1])));
	else
		printf("%i", 0);
}