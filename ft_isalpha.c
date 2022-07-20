/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:02:05 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/08 21:10:30 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	x;
// 	x = '0';

// 	if (ft_isalpha(x) != 0)
// 	{
// 		printf("The Character is: %c\n", x);
// 	}
// 	else if (ft_isalpha(x) == 0)
// 		printf("That's not a Character!\n");
// }