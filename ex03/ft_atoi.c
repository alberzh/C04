/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <azaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:53:12 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/30 15:25:29 by azaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	result;

	i = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v')
		i++;
	neg = -1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = neg * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (neg == 1)
		return (-result);
	return (result);
}

/* #include <stdio.h>

int	main(void)
{
	printf("ft_atoi(\"42\"): %d\n", ft_atoi("42"));
	printf("ft_atoi(\"  -42\"): %d\n", ft_atoi("  -42"));
	printf("ft_atoi(\"+42\"): %d\n", ft_atoi("+42"));
	printf("ft_atoi(\"   42\"): %d\n", ft_atoi("   42"));
	printf("ft_atoi(\"\\t   \\v42\"): %d\n", ft_atoi("\t   \v42"));
	printf("ft_atoi(\"42abc\"): %d\n", ft_atoi("42abc"));
	printf("ft_atoi(\"\"): %d\n", ft_atoi(""));
	printf("ft_atoi(\" ---+--+1234ab567\"): %d\n", ft_atoi(" ---+--+1234ab567"));
	return (0);
} */