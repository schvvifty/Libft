/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:20:40 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/19 18:20:48 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*merge;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	merge = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (merge == 0)
		return (NULL);
	while (s1[i] != '\0')
	{
		merge[j++] = s1[i++];
	}
	i = 0;
	while (s2[i] != '\0')
	{
		merge[j++] = s2[i++];
	}
	merge[j] = '\0';
	return (merge);
}

// int main(void)
// {
//     char *str;
//     char *str2;
//     char *r;

//     str = "Hola, como esta?\n";
//     str2 = "Igual que siempre! Y tu?";

//     r = ft_strjoin(str, str2);
//     printf("%s\n", r);
//     printf("%s\n", ft_strjoin(str, str2));
//     return (0);
// }