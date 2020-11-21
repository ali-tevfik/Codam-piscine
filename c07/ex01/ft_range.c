/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 17:12:50 by adoner        #+#    #+#                 */
/*   Updated: 2020/09/29 18:58:20 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *a;
	int i;

	if (min >= max)
		return (NULL);
	i = 0;
	if (!(a = (int*)malloc(sizeof(int) * (max - min))))
		return (NULL);
	while (min < max)
	{
		*(a + i) = min;
		min++;
		i++;
	}
	return (a);
}
