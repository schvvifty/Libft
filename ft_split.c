/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 00:58:09 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/19 18:22:01 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_count(char const *s, char c)
{
	int	amount;
	int	i;

	i = 0;
	amount = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			amount++;
			while (s[i] != c && s[i] != '\0')
			{
				i++;
			}
		}
		else
			i++;
	}
	return (amount);
}

char	*ft_wordcpy(const char *s1, int begin, int end)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc((end - begin + 1) * sizeof(char));
	while (begin < end)
	{
		word[i] = s1[begin];
		i++;
		begin++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		in;
	char	**splitstr;

	splitstr = malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (splitstr == 0 || s == 0)
		return (0);
	i = -1;
	j = 0;
	in = -1;
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && in < 0)
		{
			in = i;
		}
		else if ((s[i] == c || i == ft_strlen(s)) && in >= 0)
		{
			splitstr[j++] = ft_wordcpy(s, in, i);
			in = -1;
		}
	}
	splitstr[j] = 0;
	return (splitstr);
}

// int	main(void)
// {
// 	char	**str;
// 	unsigned int	i;
// 	int	c;
// 	c = 0;
// 	str = ft_split("I would like	to take a moment to thank...", t);
// 	i = 0;
// 	while (i++ < 10)
// 	{
// 		printf("%d\n", i, str[i]);
// 		i++;
// 	}
// 	return (0);
// }
// write a function that takes a string, splits it into words
// and returns them as a NULL-terminated array of strings. A "word" is 
// definded as part of a string delimited either by spaces/tabs/new lines,
// or by the start/end of the string.