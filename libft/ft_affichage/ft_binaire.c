/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_binaire.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 08:01:26 by mbonnet           #+#    #+#             */
/*   Updated: 2021/10/14 12:48:59 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_affichage_binaire(char c)
{
	int	x;
	int	bit;

	bit = 0;
	x = 0;
	while (x <= 7)
	{
		bit = (c >> x++) & 1;
		ft_printf("(%d)", bit);	
	}
	ft_printf("\n");
}