/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 21:22:55 by adoner        #+#    #+#                 */
/*   Updated: 2020/09/24 21:37:07 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", 1);
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	char				realint;
	int					nb2;
	long	double		i;
	int					aa;

	i = 1;
	nb = check(nb);
	nb2 = nb;
	while (nb != 0 && nb != -2147483648)
	{
		nb /= 10;
		i = i * 10;
	}
	while (i >= 10 && nb != -2147483648)
	{
		i /= 10;
		aa = (nb2 / i);
		nb2 -= aa * i;
		realint = aa + '0';
		write(1, &realint, 1);
	}
}
