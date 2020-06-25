#include <stdio.h>
#include <unistd.h>
#include <string.h>


char *ft_strncpy(char *dest, char *src, unsigned int n){
	int x;
	x = 0;
	while(dest[x] != '\0' && x < n){
		dest[x] = src[x];
		x++;
	}
	while(x < n){
		dest[x] = '\0';
		x++;
	}
	return dest;
}

