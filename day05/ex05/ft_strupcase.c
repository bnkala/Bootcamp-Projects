#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_putchar(char c){
	write(1, &c, 1);
	return (0);
}

char *ft_strupcase(char *str){
	int x;
	x = 0;
	while (str[x] != '\0'){
		if (str[x] >= 'a' && str[x] <= 'z'){
			s[x] = s[x] - 32;
			ft_putchar(str[x];
		}
		x++;
	}
	return str;
}

