/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmekoudi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:52:36 by gmekoudi          #+#    #+#             */
/*   Updated: 2023/08/22 18:52:54 by gmekoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		write(1, &letter, 1);
		letter--;
	}
}
