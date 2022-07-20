/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:20:01 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/19 22:21:42 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*trim;

	trim = NULL;
	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	if (s1 != 0 && set != 0)
	{
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && (j > i))
			j--;
		trim = (char *)malloc((sizeof(char)) * (j - i + 1));
		if (trim != 0)
			ft_strlcpy(trim, &s1[i], j - i + 1);
	}
	return (trim);
}

int main(void)
{
	
    printf("%s\n", ft_strtrim("Lifekiskonekfunnykmotherfucker", "ck"));

    return (0);
}