#include <stdio.h>

char *ft_strrev(char *str){
	char c;
	int i;
	int j;
	i=0;
	while (str[i] != '\0')
		i++;
	i = i - 1;
	j = 0;
	while(j < ((i+1) / 2)){
		c = str[j];
		str[j] = str[i - 1];
		str[i - 1] = c;
		j++;
	}
	return str;
}
