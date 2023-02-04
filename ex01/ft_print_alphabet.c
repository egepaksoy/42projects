/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:50:59 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/02 20:37:13 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;
	int		letter;

	letter = 97;
	while (letter < 123)
	{
		c = letter;
		write(1, &c, 1);
		letter += 1;
	}
}
