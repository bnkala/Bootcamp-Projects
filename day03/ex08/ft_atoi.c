#include <stdio.h>

int ft_atoi(char *str){
	int beh;
	int i;
	int j;

	beh = 0;
	i = 0;
	j = 1;

 	while (str[i] != '\0' && ((str[i] >= '0' && str[i] <= '9') || (i == 0 && (str[0] == '-' || str[0] == '+')) )){
 		if(str[i] == '-' || str[i] == '+'){
		
			i++;
		}
		beh = (beh * j) + (str[i] - 48);
		j = 10;
		i++;

	if(str[0] == '-'){
		beh = beh * -1;
	}
	return beh;
}
