/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:39:04 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/09 17:26:11 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	con;

	con = 0;
	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		con = con * 10 + str[i] - '0';
		i++;
	}
	return (sign * con);
}

// #include <stdlib.h>
// #include <stdio.h>
// int main(void)
// {
//     printf("%d\n", INT_MIN );
//     char    string[] = "-2147483648";
//     printf("ft_atoi return (is: %d\n", ft_atoi(string)));
//     printf("og returns: %d\n", atoi(string));
//     return (0);
// }
// The atoi() A to I function converts the initial portion of 
// the string pointed to by str to int representation. Can hold positive
// and negative variables