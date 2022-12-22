#include <unistd.h>

/* Creamos una función para verificar si existe un carácter repetido en una matriz. La comprobación continúa hasta que el contador no es igual al índice (o el índice no es igual a -1) */

int     ft_verif_char(char *str, char c, int index)	/* Cogemos la dirección de la matriz, el símbolo y el número ordinal del símbolo (su índice) */
{
    int     i = 0;                            		/* Declarar una variable para el contador e inicializamos el contador a cero */

    while (str[i] && (i < index || index == -1))	/* Iniciamos un bucle que busca un carácter en el arreglo hasta que el contador apunte a una celda con el carácter final */
													/* Y hasta que el contador no sea igual al índice (o el índice no sea igual a -1) */
    {
	    if (str[i] == c)							/* Compruebe si hay un carácter similar en la matriz */
            return (0);                             /* si hay, devuelve 0 */
		i++;										/* Si no, revisamos más hasta que el contador sea igual al índice o lleguemos al final de la matriz. */
    }
	return (1);										/* Si no se encuentra un carácter similar, devuelve 1 */
}

/* La función toma dos cadenas y muestra, sin caracteres dobles, los caracteres que
 * aparecen en ambas cadenas, en el orden en que aparecen en la primera. (los caracteres no deben repetirse) */

void	ft_inter(char *s1, char *s2)				/* Cogemos dos cadenas de direcciones y las escribimos en punteros. */
{
    int     i;                          			/* Declarar una variable para el contador. */
    
	i = 0;                          				/* Inicializamos el contador con cero para comenzar desde la celda de matriz cero */
	while(s1[i])               						/* Iniciamos el ciclo. Buscará caracteres de la primera línea en la segunda línea y
													** los imprimirá si los encuentra en el orden en que aparecen hasta llegar al final. */
	{
		if (ft_verif_char(s1, s1[i], i) && !ft_verif_char(s2, s1[i], -1))	/* Verificamos si no había tales caracteres en la primera matriz antes,
																			** y si en la segunda hay tal carácter */
			write(1, &s1[i], 1);											/* Luego imprimimos este caracter */
		i++;										/* Vamos al siguiente carácter de la primera matriz para verificar si está en la segunda matriz */
	}
}


int		main(int argc, char **argv)			/* aquí tomamos el número de líneas en la matriz y la propia matriz con líneas */
{
	if (argc == 3)							/* Verificamos si, además del nombre del programa, también hay dos líneas que necesitamos en los argumentos */
		ft_inter(argv[1], argv[2]);			/* Si todos los argumentos necesarios están en su lugar, los enviamos a la función */
	write(1, "\n", 1);						/* Imprimir un carácter de nueva línea */
	return (0);								/* Completamos el programa */
}