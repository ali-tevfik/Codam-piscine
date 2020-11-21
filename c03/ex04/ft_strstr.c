/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 13:02:00 by adoner        #+#    #+#                 */
/*   Updated: 2020/09/27 13:37:31 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check(char *str, char *to_find, unsigned int i)
{
	unsigned	int kontrol;

	kontrol = 0;
	while (*(to_find + kontrol) != '\0')
	{
		if (*(to_find + kontrol) != *(str + i))
		{
			return (1);
		}
		kontrol++;
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int kontrol;

	if (*to_find == '\0')
	{
		return (str);
	}
	i = 0;
	kontrol = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) == *(to_find + kontrol))
		{
			kontrol = check(str, to_find, i);
			if (0 == kontrol)
				return (str + i);
		}
		i++;
	}
	return (NULL);
}
