/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 18:13:51 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/08 22:52:37 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int i;

// 	i = 9;

// 	if (ft_isdigit(i) != 0)
// 	{
// 		printf("The digit is: %d\n", i);
// 	}
// 	else if (ft_isdigit(i) == 0)
// 	{
// 		printf("No digit, bro!\n");
// 	}
// }