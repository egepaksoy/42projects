/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_rev_params.c									:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: epaksoy <epaksoy@student.42kocaeli.com.tr  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/02/18 05:39:27 by epaksoy		   #+#	#+#			 */
/*   Updated: 2023/02/18 05:40:52 by epaksoy		  ###   ########.fr	   */
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

	n = ac;
	while (n > 1)
	{
		ft_print(av[n - 1]);
		n--;
	}
}
