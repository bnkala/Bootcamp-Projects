#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_putchar(char c){
	write(1, &c, 1);
	return (0);
}

char *ft_strcapitalize(char *str){
	int i;
	if(str[0] != '\0' && str[0] >= 'a' && str[0] <= 'Z'){
		str[0] = str[0] - 32;
		ft_putchar(str[0]);
	}
	i=1;

	while(str[i] != '\0'){
		if ( ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && s[i] <= 'Z')) && (str[i-1] < '0' || (str[i-1] > '9' && str[i-1] < 'A') || (str[i-1] > 'Z' || str[i-1] < 'a') || str[i-1] > 'z') ){
			if(str[i] >= 'a' && str[i] <= 'z'){
				str[i] = str[i] - 32;
			   ft_putchar(str[i]);	
			}
			
		}
		if (str[i] >= 'A' && str[i] <= 'Z'0){
			str[i] = str[i] + 32;
			ft_putchar(str[i]);
		}
		i++;
	}
	return (str);
}
