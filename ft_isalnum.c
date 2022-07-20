/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 18:42:13 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/08 21:10:26 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90) || (c >= 48 && c <= 57))
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

// 	i = 'n';

// 	if (ft_isalnum(i) != 0)
// 	{
// 		printf("%d\n", i);
// 	}
// 	else if (ft_isalnum(i) == 0)
// 	{
// 		printf("Not even a number nor letter!\n");
// 	}
// 	return (0);
// }