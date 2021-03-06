/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 13:12:37 by mariza            #+#    #+#             */
/*   Updated: 2021/02/04 13:19:06 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_print_str(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print_num(int n)
{
	char aux;

	if (n > 9)
		ft_print_num(n / 10);
	aux = (n % 10) + '0';
	write(1, &aux, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int count;
	int count_2;

	count = 0;
	while (par[count].str != 0)
	{
		ft_print_str(par[count].str);
		ft_print_str("\n");
		ft_print_num(par[count].size);
		ft_print_str("\n");
		ft_print_str(par[count].copy);
		ft_print_str("\n");
		count++;
	}
}
