/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:48:56 by crtorres          #+#    #+#             */
/*   Updated: 2022/12/22 17:10:07 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strrev(char *str)	/* Obtiene la dirección de la matriz de caracteres */
{
	int		i;						/* declara una variable para calcular la posición de la celda de la matriz desde el principio hasta el final */
	int		len;						/* declaramos una variable para calcular la longitud de la matriz y luego la usamos para calcular la posición de 
									la celda de la matriz desde el final hasta el principio */
	char	tmp;						/* declaramos una variable para almacenar temporalmente un carácter */

	len = 0;							/* inicializamos la variable para almacenar la longitud de la matriz allí */
	while (str[len])					/* verificamos si el primer elemento de la matriz está vacío o tiene el carácter '\ n' - finalice el ciclo */
		len++;						/* si la matriz no está vacía, agregamos uno a la variable y verificamos la celda de la matriz	*/

	i = -1;							/* Establecer i = -1; porque tenemos que empezar desde 0 y 
										al mismo tiempo tener un incremento de prefijo en el bucle (++i) */
	while (++i < --len)				/* verificamos en cada iteración si el índice i que apunta al comienzo de la matriz ha llegado 
										a la mitad y si el índice 'len' que apunta al final de la matriz ha llegado a la mitad.
										Si se encuentran en el medio, entonces el ciclo está completo */
	{
		tmp = str[i];					/* almacenar carácter en variable temporal */
		str[i] = str[len];			/* ahora insertamos en str[i] el valor de str[len] desde el final de la matriz */
		str[len] = tmp;					/* ahora empujamos el valor de la variable temporal a str[len] desde el final de la matriz, 
										que almacena el valor desde el principio de la matriz */
	}								/* Y así todo va desde los bordes hasta el medio, cambiando los caracteres para obtener una línea invertida al final. */
	return (str);					/* devuelve la dirección de la matriz que se invirtió */
}

/* #include <stdio.h>
#include <string.h>
 
int main()
{
    char str[50] = "geeksforgeeks";
 
    printf("The given string is =%s\n", str);
 
    printf("After reversing string is =%s", ft_strrev(str));
 
    return 0;
} */