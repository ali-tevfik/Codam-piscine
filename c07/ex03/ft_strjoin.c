/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 17:16:52 by adoner        #+#    #+#                 */
/*   Updated: 2020/09/29 19:07:09 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str);
int		find_len(int size, char **strs, char *sep);
char	*ft_strcat(char *dest, char *src);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		uzunluk;
	int		i;

	if (size == 0)
	{
		str = (char *)malloc(sizeof(char) * 1);
		*str = 0;
		return (str);
	}
	uzunluk = find_len(size, strs, sep);
	if (!(str = (char *)malloc(sizeof(char) * (uzunluk + 1))))
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

int		find_len(int size, char **strs, char *sep)
{
	int i;
	int length;

	length = 0;
	i = 0;
	while (i < size)
	{
		length = length + ft_strlen(strs[i]);
		i++;
	}
	length = length + (size - 1) * ft_strlen(sep) + 1;
	return (length);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*src != '\0')
	{
		*(dest + i) = *src;
		++src;
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}
