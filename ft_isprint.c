/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 21:58:31 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/08 21:10:49 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32) && (c <= 126))
	{
		return (1);
	}
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	int i;
// 	i = '~';
// 	if (ft_isprint(i) != 0)
// 	{
// 		printf("The decimal asciivalue of the printable is: %d\n", i);
// 	}
// 	else if (ft_isprint(i) == 0)
// 	{
// 		printf("Non printable character\n");
// 	}
// 	i = '~';
// 	if (isprint(i) != 0)
// 	{
// 		printf("The decimal asciivalue of the printable is: %d\n", i);
// 	}
// 	else if (isprint(i) == 0)
// 	{
// 		printf("Non printable character\n");
// 	}
// 	return (0);
// }