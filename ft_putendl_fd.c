/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phletkie < phletkie@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:20:53 by phletkie          #+#    #+#             */
/*   Updated: 2022/07/08 21:12:16 by phletkie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s == 0)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

// int main(void)
// {
//     char c[] = "Hola chico";
//     ft_putendl_fd(c, 1);
//     return(0);
// }
// Outputs the string s to the file desciptor fd followed by a '\n'
// s -> The string to output
// fd -> The file descriptor