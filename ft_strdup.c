/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 00:44:09 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/08 21:12:46 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (str == 0)
	{
		return (NULL);
	}
	while (s[len])
		++len;
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main(void)
// {
//     char    str[] = "It's not what it looks like!";
//     char    *str2;

//     str2 = ft_strdup(str);
//     printf("%s\n", ft_strdup(str));
//     printf("%s\n", str2);
// }
// The strdup() function allocates sufficient memory
// for a copy of the string s1, copies it and returns
// the pointer to it.