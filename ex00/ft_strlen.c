/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <azaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 13:30:43 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/29 15:25:48 by azaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/* #include <stdio.h>

int	main(void)
{
	char *string = "Esto es una cadena de texto de prueba";
	int length = ft_strlen(string);
	printf("La longitud de la cadena es: %d\n", length);
	return (0);
} */