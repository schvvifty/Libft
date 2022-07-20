/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 00:57:59 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/09 16:15:55 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size(long int s)
{
	int	i;

	i = 0;
	if (s == 0)
		return (i + 1);
	if (s < 0)
	{
		s *= (-1);
		i++;
	}
	while (s > 0)
	{
		s /= 10;
		i++;
	}
	return (i);
}

char	*ft_if_0(long nb, char *nbr)
{
	if (nb == 0)
		nbr[0] = 48;
	return (nbr);
}

char	*ft_itoa(int n)
{
	char		*num;
	long int	nb;
	size_t		i;

	nb = (long int)n;
	i = ft_size(nb);
	num = (char *)malloc(sizeof(char) * (ft_size(nb) + 1));
	if (!num)
		return (NULL);
	num[i--] = '\0';
	ft_if_0(nb, num);
	if (nb < 0)
	{
		num[0] = '-';
		nb *= (-1);
	}
	while (nb > 0)
	{
		num[i] = 48 + (nb % 10);
		nb /= 10;
		i--;
	}
	return (num);
}

// int main(void)
// {
//     printf("%s\n", ft_itoa(24932));
//     return (0);
// }
// Allocates (with malloc(3)) and returns a string
// representing the integer received as an argument.
// Negative numbers must be handled.
// Null if allocation fails