/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchandreplace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:39:44 by crtorres          #+#    #+#             */
/*   Updated: 2022/12/22 17:07:58 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 4)
	{
		if(((av[2][0] >= 'a' && av[2][0]<= 'z') || (av[2][0] >= 'A' && av[2][0]<= 'Z')) && av[2][1] == '\0')
			if (((av[3][0] >= 'a' && av[2][0]<= 'z') || (av[3][0] >= 'A' && av[3][0]<= 'Z')) && av[3][1] == '\0')
			{
				while (av[1][i] != '\0')
				{
					if (av[1][i] == av[2][0])
							av[1][i] = av[3][0];
					write(1, &av[1][i], 1);
					i++;
				}
			}
	}
	write(1, "\n", 1);
} */

// ******************************** version 2 *********************************************************************

int main(int argc, char **argv)
{
    int i = 0;

    // Checking if the number of arguments is 4 and if the second and third
	// arguments are only one character long.
	if (argc == 4 && !(argv[2][1] && argv[3][1]))
    {
        while (argv[1][i])
        {
            if (argv[1][i]==argv[2][0])
            {
                argv[1][i] = argv[3][0];
            }
            write (1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
}