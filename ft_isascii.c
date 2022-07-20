/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 19:22:16 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/08 21:10:38 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char i;

// 	i = '&';
// 	if (ft_isascii(i) != 0)
// 	{
// 		printf("%c\n", i);
// 	}
// 	else if (ft_isascii(i) == 0)
// 	{
// 		printf("Not ascii, bre!\n");
// 	}
// }