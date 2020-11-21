/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_next_prime.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 15:00:58 by adoner        #+#    #+#                 */
/*   Updated: 2020/09/27 14:49:36 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int i;
	int total;

	total = 0;
	while (nb)
	{
		nb++;
		i = nb - 1;
		total = 0;
		while (i > 0)
		{
			if (nb % i == 0)
			{
				total = total + i;
				break ;
			}
			i--;
		}
		if (total == 1)
		{
			return (nb);
		}
	}
	return (1);
}
