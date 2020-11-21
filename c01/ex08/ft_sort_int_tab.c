/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_int_tab.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 12:41:44 by adoner        #+#    #+#                 */
/*   Updated: 2020/09/16 12:46:00 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int j;
	int k;

	j = 0;
	while (j < size)
	{
		k = j + 1;
		while (k < size)
		{
			if (tab[j] > tab[k])
			{
				temp = tab[j];
				tab[j] = tab[k];
				tab[k] = temp;
			}
			++k;
		}
		++j;
	}
}
