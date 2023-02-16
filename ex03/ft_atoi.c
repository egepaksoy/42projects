/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:38:14 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/16 00:28:43 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ret_space(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		if (!n || str[n] == 32)
		{
			n++;
		}
		else if (n != 0)
		{
			return (n);
		}
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	n;
	int	res;
	int	t;

	n = ret_space(str);
	res = 0;
	t = 1;
	while (str[n])
	{
		if (str[n] >= 48 && str[n] <= 57)
		{
			res = res * 10 + str[n] - 48;
		}
		else if (str[n] == 45 || str[n] == 43)
		{
			if (str[n] == 45)
			t *= -1;
		}
		else
		{
			return (res * t);
		}
		n++;
	}
	return (res * t);
}
