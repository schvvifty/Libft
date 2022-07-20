/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 18:31:15 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/19 18:06:59 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dst, size_t n)
{
	char	*c;
	size_t	i;

	i = 0;
	c = (char *)dst;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
}

// #include <stdio.h>
// int main(void)
// {
//     char arr[] = "sdsdse3e2";
//     int i;
//     i = 0;
//     while(i < 10)
//     {
//         printf("%d ", arr[i]);
//         i++;
//     }
//     printf("\n");
//     ft_bzero(arr,sizeof(arr));
//     i = 0;
//     while(i < 10)
//     {
//         printf("%d ", arr[i]);
//         i++;
//     }
//     printf("\n");
//     char    str [] = "Abracadabra";
//     size_t n;

//     n = 5;
//     ft_bzero(str + 4, n);
//     printf("str: %s\n", str);
//     return (0);
// }
// The bzero() function erases the data in the n bytes of the memory
// starting at the location pointed to by s, by writing zeros (bytes
// containing '\0') to that area. It's a zero byte string. 
// the string does not print as it is destroyed