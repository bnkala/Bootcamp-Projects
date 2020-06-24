#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2){
	int x;
	int y;
	x = 0;
	while(s1[x] != '\0' && s2[x] != '\0'){
		if (s1[x] != s2[x]){
			y = s1[x] - s2[x];
			return y;
		}
		x++;
	}
	if ((s1[x] == '\0' && s2[x] != '\0') || (s2[x] == '\0' && s1[x] != '\0')){
		y = s1[x] - s2[x];
		return y;
	}
	return (0);
}

