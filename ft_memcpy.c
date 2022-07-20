/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 01:26:40 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/09 16:46:26 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_char;
	const unsigned char	*src_char;
	size_t				i;

	if (!dst && !src)
		return (NULL);
	dst_char = (unsigned char *)dst;
	src_char = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst_char[i] = src_char[i];
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	src[];
// 	char	dst[50];
// 	src[] = "Testing";
// 	printf("%s\n", ft_memcpy(dst, src, 5));
// 	return (0);
// }
// The memcpy() function copies n bytes from the object pointed to by src
// into the object pointed to by dst. If copying takes place between objects
// that overlap, the behavior is undefined