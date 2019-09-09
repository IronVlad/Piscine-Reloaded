/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevilhaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:08:39 by yevilhaw          #+#    #+#             */
/*   Updated: 2019/09/04 20:57:28 by yevilhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int ac, const char *av[])
{
	int	i;

	i = 1;
	while (ac > i)
	{
		while (*av[i])
			ft_putchar(*av[i]++);
		i++;
		ft_putchar('\n');
	}
	return (0);
}
