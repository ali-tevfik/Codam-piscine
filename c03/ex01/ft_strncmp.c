/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 12:23:55 by adoner        #+#    #+#                 */
/*   Updated: 2020/09/25 18:58:22 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				result;

	i = 0;
	while (*(s1 + i) != '\0')
	{
		if (i < n)
		{
			if (!(*(s1 + i) == *(s2 + i)))
			{
				result = *(s1 + i) - *(s2 + i);
				return (result);
			}
			i++;
		}
		else
		{
			i++;
		}
	}
	if (*(s2 + i) != '\0' && i < n)
		return (0 - *(s2 + i));
	return (0);
}
