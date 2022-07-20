/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:52:45 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/08 22:57:19 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
		return (c);
	}
	else
	{
		return (c);
	}
}

// #include <stdio.h>
// int main(void)
// {
//     char c;
//     c = 9;
//     ft_tolower(c);
//     printf("%d", c);
// }