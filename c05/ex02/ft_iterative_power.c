/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 15:02:58 by adoner        #+#    #+#                 */
/*   Updated: 2020/09/27 14:42:17 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int total;

	total = 1;
	if (power == 0)
		return (1);
	if (power <= 0)
		return (0);
	while (power > 0)
	{
		total = total * nb;
		power--;
	}
	return (total);
}
