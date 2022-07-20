/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 00:24:03 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/19 18:19:58 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)(haystack + i));
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
//     char find [] = "Hola, compadres";
//     char haystack [] = "pad";
//     size_t  a;
//     a = 12;
//     printf("%s\n", ft_strnstr(haystack, find, a));
//     printf("og: %s\n", strnstr(haystack, find, a));
//     return (0);
// }
// locate a substring in a string
// The strnstr() function locates the first occurrence of the null-terminated
// string needle in the string haystack, where not more than len characters
// are searched.  Characters that appear after a `\0' character are not
// searched.