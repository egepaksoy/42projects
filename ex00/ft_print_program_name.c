/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_print_program_name.c							:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: epaksoy <epaksoy@student.42kocaeli.com.tr  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/02/18 05:32:35 by epaksoy		   #+#	#+#			 */
/*   Updated: 2023/02/18 05:36:20 by epaksoy		  ###   ########.fr	   */
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
	if (ac)
		ft_print(av[0]);
}
