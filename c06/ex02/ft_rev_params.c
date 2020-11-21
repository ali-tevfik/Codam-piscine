/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_params.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 15:57:35 by adoner        #+#    #+#                 */
/*   Updated: 2020/09/27 16:20:05 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		x;
	char	*name;

	x = 0;
	i = argc - 1;
	while (i >= 1)
	{
		name = argv[i];
		while (*(name + x) != '\0')
		{
			write(1, (name + x), 1);
			x++;
		}
		write(1, "\n", 1);
		i--;
		x = 0;
	}
	return (0);
}
