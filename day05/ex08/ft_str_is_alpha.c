#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_str_is_alpha(char *str){
	int i;
	i =0;
	while (str[i] != '\0'){
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
			return 1;
		}
		else {
			return 0;
		}
		i++;
	}
	if (str[i] == '\0'){
		return 1;
	}
	return 1;
}
