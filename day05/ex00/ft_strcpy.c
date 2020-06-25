/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnkala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:30:43 by bnkala            #+#    #+#             */
/*   Updated: 2020/06/25 11:24:53 by bnkala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c){
	write(1, &c, 1);
	return (0);
}

char *ft_strcpy(char *dest, char *src){
	int x;
	x = 0;
	while (src[x] != '\0'){
		dest[x] = src[x];
		ft_putchar(dest);
		x++;
	}
	*dest = '\0';
	return dest;
}

int main(){
	return (0);
}
