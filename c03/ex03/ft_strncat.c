/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 12:33:57 by adoner        #+#    #+#                 */
/*   Updated: 2020/09/27 18:53:15 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned	int	i;
	unsigned	int	kontrol;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	kontrol = 0;
	while (kontrol < nb && *(src + kontrol) != '\0')
	{
		*(dest + i + kontrol) = *(src + kontrol);
		kontrol++;
	}
	*(dest + i + kontrol) = '\0';
	return (dest);
}
