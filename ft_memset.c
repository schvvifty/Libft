/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:50:22 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/09 15:07:28 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char	string[10] = "bing bong";
//  	printf("%s\n", string);
//  	ft_memset(string, '*', 4 * sizeof(string[0]));
//sets first characters to *
//  	printf("String after memset(): %s \n", string);
//  	memset(string, '*', 4 * sizeof(string[0]));
//  	printf("String after original(): %s \n", string);
//  	return	(0);
// }

// The memset() function writes n bytes of value c
// (converted to an unsigned char) to the string dst
