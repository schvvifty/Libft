/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 00:00:54 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/09 15:04:54 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}

// int main ()
// {
//     char str1[] = "test\200";
//     char str2[] = "test\0";

//     int n;
//     n = 6;
//     ft_strncmp(str1, str2, n);
//     printf("return (value is:%d\n", ft_strncmp(str1, str2, n)));
// 	printf("original is:%d\n", strncmp(str1,str2, n));
//     return (0);
// }

// The strncmp() function shall compare not more than n bytes (bytes
// that follow a NUL character are not compared) from the array
// pointed to by s1 to the array pointed to by s2.