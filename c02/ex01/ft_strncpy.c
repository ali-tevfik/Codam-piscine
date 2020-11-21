/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 18:50:06 by adoner        #+#    #+#                 */
/*   Updated: 2020/09/24 15:29:13 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int y;

	i = 0;
	y = 0;
	while (i < n)
	{
		if (*(src + y) != '\0')
		{
			*(dest + i) = *(src + y);
			y++;
		}
		else
		{
			*(dest + i) = '\0';
		}
		i++;
	}
	return (dest);
}
