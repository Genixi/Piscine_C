/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 18:25:54 by equiana           #+#    #+#             */
/*   Updated: 2019/07/08 19:41:14 by equiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_letter(char c)
{
	if ((c >= 'a') && (c = 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	if ((c >= '0') && (c = '9'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int word_flag;

	i = 0;
	word_flag = 0;
	while (str[i] != '\0')
	{
		if ((word_flag == 0) && (str[i] >= 'a') && (str[i] <= 'z'))
			str[i] = str[i] + ('A' - 'a');
		else if ((word_flag == 1) && (str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] = str[i] + ('a' - 'A');
		if (!is_letter(str[i]))
			word_flag = 0;
		else
			word_flag = 1;
		i++;
	}
	return (str);
}
