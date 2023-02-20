/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*													+:+ +:+		 +:+	 */
/*   By: epaksoy <epaksoy@student.42kocaeli.com.tr  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/02/18 05:41:23 by epaksoy		   #+#	#+#			 */
/*   Updated: 2023/02/19 11:26:20 by epaksoy          ###   ########.fr       */
/*																			*/
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *c)
{
	int	n;

	n = 0;
	while (c[n])
		n++;
	write(1, c, n);
	write(1, "\n", 1);
}

void	swap(char **av, int i)
{
	char	*max;
	int		n;

	n = 0;
	while (av[i][n] || av[i + 1][n])
	{
		if (av[i][n] > av[i + 1][n])
		{
			max = av[i + 1];
			av[i + 1] = av[i];
			av[i] = max;
			break ;
		}
		if (av[i][n] == av[i + 1][n])
			n++;
		if (av[i][n] < av[i + 1][n])
			break ;
	}
}

int	main(int ac, char **av)
{
	int		n;
	int		i;

	n = 1;
	while (n < ac - 1)
	{
		i = 1;
		while (i < ac - 1)
		{
			swap(av, i);
			i++;
		}
		n++;
	}
	n = 1;
	while (n < ac)
	{
		ft_print(av[n]);
		n++;
	}
}
