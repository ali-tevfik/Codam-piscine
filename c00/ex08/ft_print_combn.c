/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_combn.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <adoner@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 14:36:46 by adoner        #+#    #+#                 */
/*   Updated: 2020/09/13 16:21:50 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	int		i;
	int		j;
	char	first;
	char	second;

	i = 0;
	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			first = i + '0';
			second = j + '0';
			write(1, &first, 1);
			write(1, &second, 1);
			if (!(i == 8 && j == 9))
			{
				write(1, ",", 1);
			}
			j++;
		}
		i++;
	}
}
