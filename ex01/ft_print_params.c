/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_print_params.c								  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: epaksoy <epaksoy@student.42kocaeli.com.tr  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/02/18 05:37:09 by epaksoy		   #+#	#+#			 */
/*   Updated: 2023/02/18 05:38:51 by epaksoy		  ###   ########.fr	   */
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

int	main(int ac, char **av)
{
	int	n;

	n = 1;
	while (n < ac)
	{
		ft_print(av[n]);
		n++;
	}
}
