/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:11:11 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/16 01:09:33 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	sz;

	sz = 0;
	while (str[sz])
	{
		sz++;
	}
	return (sz);
}

int	check(char *base)
{
	int	n;
	int	i;

	n = 0;
	while (base[n + 1])
	{
		if (base[n] <= 32 || base[n] == 127 || base[n] == 43 || base[n] == 45)
			return (0);
		i = n + 1;
		while (base[i])
		{
			if (base[i] == base[n])
				return (0);
			i++;
		}
		n++;
	}
	if (n < 2)
		return (0);
	return (1);
}

int	ft_strsearch(char c, char *base)
{
	int	n ;

	n = 0;
	while (base[n])
	{
		if (c == base[n])
		{
			return (n);
		}
		n++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	n;
	int	rtn;
	int	base_len;

	n = 0;
	rtn = 0;
	if (!check(base))
	{
		return (0);
	}
	base_len = ft_strlen(base);
	while (str[n])
	{
		rtn = rtn * base_len + ft_strsearch(str[n], base);
		n++;
	}
	return (rtn);
}
