/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/15 14:41:42 by adoner        #+#    #+#                 */
/*   Updated: 2020/09/15 14:45:23 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int thirdadress;

	thirdadress = *b;
	*b = *a;
	*a = thirdadress;
}
