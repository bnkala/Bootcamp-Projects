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
#include <string.h>

char *ft_strcpy(char *dest, char *src){
	int x;
	x = 0;
	while (src[x] != '\0'){
		dest[x] = src[x];
	
		x++;
	}
	*dest = '\0';
	return dest;
}

