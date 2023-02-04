/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:51:13 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/02 20:42:27 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		letter;
	char	c;

	letter = 122;
	while (letter > 96)
	{
		c = letter;
		write(1, &c, 1);
		letter -= 1;
	}
}
