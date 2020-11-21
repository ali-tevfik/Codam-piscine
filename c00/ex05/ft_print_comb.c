/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/13 16:46:29 by adoner        #+#    #+#                 */
/*   Updated: 2020/09/13 17:16:40 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int writing(int a, int b, int c);

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '9')
	{
		++a;
		b = a;
		--a;
		while (b <= '9')
		{
			++b;
			c = b;
			--b;
			while (c <= '9')
			{
				c = writing(a, b, c);
			}
			++b;
		}
		++a;
	}
}

int		writing(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(c == '9' && b == '8' && a == '7'))
		write(1, ", ", 2);
	++c;
	return (c);
}
