/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:20:42 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/08 22:22:11 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

// char    ft_test(char *str)
// {
//     printf("This is not a test:%s", str);
//     return (0);
// }
// int main(void)
// {
//     char    str[20] = "Draf Gracula";
//     printf("%s\n", str);
//     ft_striteri(str, ft_test(str));
//     printf("%s\n", str);
//     return (0);
// }
// Applies the function f to each character of the string passed
// as argument, passing its index as first argument. Each
// character is passed by address to f to be modified if necessary.