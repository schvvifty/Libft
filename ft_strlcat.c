/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:32:11 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/09 15:04:10 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	if (dstsize < (dstlen + 1))
	{
		return (dstsize + srclen);
	}
	if (dstsize > (dstlen + 1))
	{
		while (src[i] != '\0' && (dstlen + 1 + i) < dstsize)
		{
			dst[dstlen + i] = src[i];
			i++;
		}
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

// int main(void)
// {
//     char src[] = "Wau wau2";
//     char dst[] = "Miau Miau";
//     int r;
//     r = ft_strlcat(dst, src, 20);
//     printf("Value copied into dst: %s with length %d", dst, r);
//     return (0);
// }