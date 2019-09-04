/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 10:12:42 by equiana           #+#    #+#             */
/*   Updated: 2019/07/10 20:42:20 by equiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int param;

	i = 1;
	while (i < argc)
	{
		param = 0;
		while (argv[i][param] != '\0')
		{
			ft_putchar(argv[i][param]);
			param++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
