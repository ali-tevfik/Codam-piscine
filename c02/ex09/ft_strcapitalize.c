/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 21:16:18 by adoner        #+#    #+#                 */
/*   Updated: 2020/09/24 15:32:03 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		check(char *str, int i)
{
	if (*(str + i) >= 'a' && *(str + i) <= 'z')
	{
		return (0);
	}
	else if (*(str + i) >= 'A' && *(str + i) <= 'Z')
	{
		return (0);
	}
	else if (*(str + i) >= '0' && *(str + i) <= '9')
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (i == 0 && *(str + i) >= 'a' && *(str + i) <= 'z')
		{
			*(str + i) = *(str + i) - 32;
		}
		else if (check(str, i - 1) == 1)
		{
			if (*(str + i) >= 'a' && *(str + i) <= 'z')
			{
				*(str + i) = *(str + i) - 32;
			}
		}
		else if (i != 0 && *(str + i) >= 'A' && *(str + i) <= 'Z')
		{
			*(str + i) = *(str + i) + 32;
		}
		i++;
	}
	return (str);
}
