/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_prima.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 14:59:50 by adoner        #+#    #+#                 */
/*   Updated: 2020/09/27 18:45:38 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;
	int total;

	if (nb <= 1)
	{
		return (0);
	}
	total = 0;
	i = nb - 1;
	while (i > 0)
	{
		if (nb % i == 0)
		{
			total = total + i;
		}
		i--;
	}
	if (total == 1)
	{
		return (1);
	}
	return (0);
}
