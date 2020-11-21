/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 17:06:21 by adoner        #+#    #+#                 */
/*   Updated: 2020/09/29 17:09:22 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		uzunluk;
	char	*str;
	int		i;

	i = 0;
	uzunluk = 0;
	while (*(src + uzunluk) != '\0')
		uzunluk++;
	if (!(str = (char*)malloc(sizeof(*str) * (uzunluk + 1))))
		return (NULL);
	while (*(src + i) != '\0')
	{
		*(str + i) = *(src + i);
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
