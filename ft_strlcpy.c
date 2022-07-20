/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 23:21:30 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/09 16:48:20 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (dstsize == 0)
		return (src_len);
	while (src[i] != '\0' && i < (dstsize) - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

// void    try(int size)
// {
//     char string[] = "Coconut water";
//     char dst[20];
//     int r;
//     r = strlcpy(dst, string, size);
//     printf("src: %s dst: %s with size: %d\n", string, dst, r);
// }
// int main(void)
// {
//     try(24);
//     try(3);
//     try(2);
//     try(0);
//     return (0);
// }