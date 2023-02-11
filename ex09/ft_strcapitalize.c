/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:56:29 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/11 16:59:02 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	makeup(char c)
{
	int	n;

	n = 0;
	if (97 <= c && c <= 122)
	{
		c -= 32;
	}
	return (c);
}

char	makelow(char c)
{
	int	n;

	n = 0;
	if (65 <= c && c <= 90)
	{
		c += 32;
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	n;

	n = 0;
	if (str[n] == '\0')
		return (str);
	str[n] = makeup(str[n]);
	n++;
	while (str[n] != '\0')
	{
		str[n] = makelow(str[n]);
		n++;
	}
	n = 0;
	while (str[n] != '\0')
	{
		if (!((str[n] >= 'a' && str[n] <= 'z')
				|| (str[n] >= '0' && str[n] <= '9'))
			&& (str[n + 1] >= 'a' && str[n + 1] <= 'z'))
		{
			str[n + 1] = makeup(str[n + 1]);
			n++;
		}
		n++;
	}
	return (str);
}
