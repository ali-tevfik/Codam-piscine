/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 18:36:57 by adoner        #+#    #+#                 */
/*   Updated: 2020/09/13 17:00:31 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	totalscore;
	char	realint;
	int		nb2;
	int		i;
	int		aa;

	i = 1;
	nb2 = nb;
	while (nb != 0)
	{
		nb /= 10;
		i *= 10;
	}
	while (i >= 10)
	{
		i /= 10;
		aa = (nb2 / i);
		nb2 -= aa * i;
		realint = aa + '0';
		write(1, &realint, 1);
	}
}
