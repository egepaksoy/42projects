/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:37:20 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/23 02:52:17 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN
# define FT_BOOLEAN

enum t_bool
{
    FALSE,
    TRUE
};

void ft_is_even(int nbr);
void ft_putstr(char *str);

# define EVEN (nbr % 2)
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an even number of arguments.\n"
# define SUCCESS (nbr % 2)

#endif
