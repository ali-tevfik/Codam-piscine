/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 21:24:22 by adoner        #+#    #+#                 */
/*   Updated: 2020/09/24 21:28:53 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int digit;
	int kontrol_;

	kontrol_ = 0;
	i = 0;
	digit = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) == '-')
		{
			kontrol_++;
		}
		else if ((*(str + i) >= 'a' && *(str + i) >= 'z') ||
				(*(str + i) >= 'A' && *(str + i) >= 'Z') || *(str + i) == ' ')
		{
			break ;
		}
		else if (*(str + i) >= '0' && *(str + i) <= '9')
			digit = (digit * 10) + *(str + i) - '0';
		i++;
	}
	if (kontrol_ % 2 == 1)
		digit = digit * (-1);
	return (digit);
}
