/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_int_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/15 15:37:34 by adoner        #+#    #+#                 */
/*   Updated: 2020/09/15 16:25:01 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int array[size];
	int k;

	k = 0;
	i = 0;
	while (i < size)
	{
		array[i] = *(tab + i);
		i++;
	}
	i--;
	while (i >= 0)
	{
		*(tab + k) = array[i];
		k++;
		i--;
	}
}
