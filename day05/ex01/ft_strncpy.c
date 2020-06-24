#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_putchar(char c){
	write(1, &c, 1);
	return(0);
}

char *ft_strncpy(char *dest, char *src, unsigned int n){
	int x;
	x = 0;
	while(dest[x] != '\0' && x < n){
		dest[x] = src[x];
		ft_putchar(dest);
		x++;
	}
	while(x < n){
		dest[x] = '\0';
		x++;
	}
	return dest;
}

int main(){
	char s[13] = "NoMoere";
	char v[13];
	ft_strncpy(v, s, 13);
	return (0);
}
