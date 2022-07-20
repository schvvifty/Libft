/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 00:06:16 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/19 18:10:00 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*str;
	unsigned const char	*str2;
	size_t				i;

	i = 0;
	str = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str[i] != str2[i])
			return (str[i] - str2[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
//     char str[] = "Miau wauwau";
//     char str2[] = "Moo waumiau";
//     printf("%d\n", ft_memcmp(str, str2, 30));
//     return (0);
// }
// The memcmp() compares byte string of s1 to bytes of s2. 
// Both strings are assumed 
// to be n bytes long.
// returns zero if the two strings are identical, otherwise returns the 
// difference between the
// first two differing bytes 