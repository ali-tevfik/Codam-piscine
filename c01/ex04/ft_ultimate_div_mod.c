/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/15 14:55:51 by adoner        #+#    #+#                 */
/*   Updated: 2020/09/15 15:07:22 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int devidis;
	int reminder;
	int aa;
	int bb;

	aa = *a;
	bb = *b;
	devidis = aa / bb;
	reminder = aa % bb;
	*b = reminder;
	*a = devidis;
}
