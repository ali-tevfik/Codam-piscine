/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 15:07:46 by adoner        #+#    #+#                 */
/*   Updated: 2020/09/27 14:48:09 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int x;
	int total;

	x = 1;
	while (x)
	{
		total = x * x;
		if (nb == total)
		{
			return (x);
		}
		else if (nb < total)
			return (0);
		else
			x++;
	}
	return (0);
}
