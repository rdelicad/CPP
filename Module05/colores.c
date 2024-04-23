/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colores.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:23:13 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/20 12:57:42 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void ft_message()
{
	printf("\033[0;37mselect a language 'en' or 'es' ->\033[0m \033[0;92m./color <language>\033[0m\n");
	//printf("\033[2j\033[H\n");
}

int main(int argc, char **argv)
{
	if (argc != 2 || argv[1] == NULL)
	{
		ft_message();
		return 1;
	}
	
	if (strcmp(argv[1], "en") == 0)
	{
		for (int i = 30; i <= 37; i++)
			printf("\033[%dm%d\t\t\033[%dm%d\n", i, i, i + 60, i + 60);

		printf("\033[39m\\033[49m                 - Reset color\n");
		printf("\\033[2K                          - Clear Line\n");
		printf("\\033[<L>;<C>H or \\033[<L>;<C>f  - Put the cursor at line L and column C.\n");
		printf("\\033[<N>A                        - Move the cursor up N lines\n");
		printf("\\033[<N>B                        - Move the cursor down N lines\n");
		printf("\\033[<N>C                        - Move the cursor forward N columns\n");
		printf("\\033[<N>D                        - Move the cursor backward N columns\n");
		printf("\\033[2J                          - Clear the screen, move to (0,0)\n");
		printf("\\033[K                           - Erase to end of line\n");
		printf("\\033[s                           - Save cursor position\n");
		printf("\\033[u                           - Restore cursor position\n");
		printf("\\033[4m                          - Underline on\n");
		printf("\\033[24m                         - Underline off\n");
		printf("\\033[1m                          - Bold on\n");
		printf("\\033[21m                         - Bold off\n");
	}
	else if (strcmp(argv[1], "es") == 0)
	{
		for (int i = 30; i <= 37; i++)
        	printf("\033[%dm%d\t\t\033[%dm%d\n", i, i, i + 60, i + 60);

		printf("\033[39m\\033[49m                 - Restablecer color\n");
		printf("\\033[2K                          - Limpiar línea\n");
		printf("\\033[<L>;<C>H o \\033[<L>;<C>f  - Coloca el cursor en la línea L y columna C.\n");
		printf("\\033[<N>A                        - Mueve el cursor N líneas hacia arriba\n");
		printf("\\033[<N>B                        - Mueve el cursor N líneas hacia abajo\n");
		printf("\\033[<N>C                        - Mueve el cursor N columnas hacia adelante\n");
		printf("\\033[<N>D                        - Mueve el cursor N columnas hacia atrás\n");
		printf("\\033[2J                          - Limpia la pantalla, mueve a (0,0)\n");
		printf("\\033[K                           - Borra hasta el final de la línea\n");
		printf("\\033[s                           - Guarda la posición del cursor\n");
		printf("\\033[u                           - Restaura la posición del cursor\n");
		printf("\\033[4m                          - Subrayado activado\n");
		printf("\\033[24m                         - Subrayado desactivado\n");
		printf("\\033[1m                          - Negrita activada\n");
		printf("\\033[21m                         - Negrita desactivada\n");

	}
	else
		ft_message();

    return 0;
}