/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_program_name.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 15:53:39 by adoner        #+#    #+#                 */
/*   Updated: 2020/09/29 12:04:39 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char *name;

	argc = 0;
	name = argv[0];
	while (*name != '\0')
	{
		write(1, name, 1);
		++name;
	}
	write(1, "\n", 1);
	return (0);
}
