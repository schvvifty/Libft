/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 00:44:14 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/19 22:09:48 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb >= 4294967295 || size >= 4294967295)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     printf("%p\n", ft_calloc(8, 8));
//     printf("%p\n", calloc(8, 8));
//     return (0);
// }
// allocates the requested memory and returns a pointer to it.
// The difference in malloc and calloc is that malloc does not
// set the memory to zero where as calloc sets allocated memory
// to zero.