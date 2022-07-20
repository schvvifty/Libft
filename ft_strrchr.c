/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:53:43 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/09 15:05:05 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
		{
			return ((char *)&s[len]);
		}
		len--;
	}
	if ((char)c == '\0')
		return ((char *)s + len);
	return (NULL);
}

// int	main(void)
// {
// 	char		arr[];
// 	const char	*test;

// 	arr[] = "Hola, como esta?";
// 	test = ft_strrchr(arr, 'o');
// 	while (test != NULL)
// 	{
// 		printf("%lld\n", test - arr + 1);
// 		test = ft_strrchr(test + 1, 'o');
// 	}
// }
