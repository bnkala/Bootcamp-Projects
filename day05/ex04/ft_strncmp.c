#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n){
	unsigned int x;
	x =0;
	while(s1[x] != '\0' && s2[x] != '\0' && x < n){
		if(s1[x] != s2[x]){
			return (s1[x] - s2[x]);
		}
		x++;
	}
	if(x < n && ((s1[x] == '\0' && s2[x] != '\0') || (s2[x] == '\0' && s1[x] != '\0'))){
		return (s1[x] - s2[x]);
	}
	return (0);
}
