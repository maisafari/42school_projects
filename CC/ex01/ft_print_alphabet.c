/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuntubw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:45:55 by mbuntubw          #+#    #+#             */
/*   Updated: 2021/01/10 16:38:11 by mbuntubw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
 
 void    ft_print_alphabet(void)
{
	char letter ='a';
	while( letter<='z')
	{
		write(1,&letter,1);
		letter++;
	}
 }
