/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:50:29 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/19 18:27:32 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

// int main(void)
// {
//     char    arr[] = "Hola, como esta?";
//     const char *test;
//     test = ft_strchr(arr, 'o');
//     while (test != NULL)
//     {
//         printf("%lld\n", test - arr + 1);
//         test = ft_strchr(test + 1, 'o');
//     }
//     printf("test 2\n");
//     test = ft_strchr(arr, 'a');
//     printf("%lld\n", test - arr + 1);
// }
// strchr() function is used to find when the
// character first occurred in the string, if
// doesn't exist - return null pointer