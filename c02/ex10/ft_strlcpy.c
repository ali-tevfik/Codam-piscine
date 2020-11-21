/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 21:19:23 by adoner        #+#    #+#                 */
/*   Updated: 2020/09/24 15:35:51 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 1;
	if (size > 0)
	{
		while (*(src + i) != '\0')
		{
			if (i == size)
			{
				break ;
			}
			*(dest + i) = *(src + i);
			i++;
		}
	}
	if (size != 0)
	{
		*(dest + i) = '\0';
	}
	while (*(src + i) != '\0')
	{
		i++;
	}
	return (i);
}
