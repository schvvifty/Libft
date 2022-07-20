/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 14:29:50 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/08 21:11:41 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;
	size_t			i;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == ch)
		{
			return (str);
		}
		i++;
		str++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char		str[] = "odqwertt";
// 	const char	*c;
// 	printf("%s\n", str);
// 	printf("%s\n", ft_memchr(str, 'c', 10));
// 	return (0);
// }
// The ft_memchr() function locates the first occurrence
// of c (converted to an unsigned char) in string s. Returns a
// pointer to the byte located, or NULL if no such byte exists
// within n bytes