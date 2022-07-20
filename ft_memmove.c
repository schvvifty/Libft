/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 02:23:09 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/08 21:12:02 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == 0 && src == 0)
		return (NULL);
	if (dst > src)
	{
		while (n > 0)
		{
			((char *)dst)[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}

// #include <stdio.h>

// int main(void)
// {
//     char src[] = "Testing";
//     char dst[50];

//     ft_memmove(src + 4, dst + 4, 6);
//  	printf("%s \n", src);
//  	printf("%s \n", dst);
//  	return	(0);
// }

// The memmove() function copies len bytes from string
// src to string dst.  The two strings may overlap; the
// copy is always done in a non-destructive manner.