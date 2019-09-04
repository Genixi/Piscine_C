/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 10:12:42 by equiana           #+#    #+#             */
/*   Updated: 2019/07/10 20:34:08 by equiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int id;

	id = 0;
	argc = 1;
	while (argv[0][id] != '\0')
	{
		ft_putchar(argv[0][id]);
		id++;
	}
	ft_putchar('\n');
	return (0);
}
