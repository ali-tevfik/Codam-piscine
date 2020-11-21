/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_range.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 17:14:26 by adoner        #+#    #+#                 */
/*   Updated: 2020/09/29 18:58:59 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int x;
	int *range2;

	x = 0;
	if (!(range2 = (int*)malloc(sizeof(int) * (max - min))))
		return (-1);
	if (min >= max)
		return (0);
	while (min < max)
	{
		*(range2 + x) = min;
		min++;
		x++;
	}
	*range = range2;
	return (x);
}
