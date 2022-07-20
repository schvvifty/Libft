/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:20:55 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/08 21:12:11 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main(void)
// {
//     char c;
//     c = 'o';
//     ft_putchar_fd(c, 2);
//     return (0);
// }
// Outputs the char c to the file descriptor fd
// c -> The character to output
// fd -> The file descriptor