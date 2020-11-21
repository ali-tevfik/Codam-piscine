/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <adoner@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 14:34:15 by adoner        #+#    #+#                 */
/*   Updated: 2020/09/13 17:17:34 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writing(int i, int j, int k, int l);
void	ft_print_comb2(void);
int		ww(int i, int j, int k, int l);

void	ft_print_comb2(void)
{
	int i;
	int j;
	int k;
	int l;

	i = '0';
	j = '0';
	k = '0';
	l = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			k = '0';
			while (k <= '9')
			{
				l = '0';
				l = ww(i, j, k, l);
				++k;
			}
			++j;
		}
		++i;
	}
}

void	writing(int i, int j, int k, int l)
{
	if ((i * 10 + j) < (k * 10 + l))
	{
		write(1, &i, 1);
		write(1, &j, 1);
		write(1, " ", 1);
		write(1, &k, 1);
		write(1, &l, 1);
		if (!(i == '9' && j == '8' && k == '9' && l == '9'))
			write(1, ",", 1);
	}
}

int		ww(int i, int j, int k, int l)
{
	while (l <= '9')
	{
		writing(i, j, k, l);
		++l;
	}
	return (l);
}
