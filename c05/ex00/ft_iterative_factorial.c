/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 15:02:37 by adoner        #+#    #+#                 */
/*   Updated: 2020/09/25 15:02:39 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;

	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 1)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}
