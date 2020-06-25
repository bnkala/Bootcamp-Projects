#include <stdio.h>
#include <unistd.h>

int ft_putchar(char y){
	write(1, &y, 1);
	return (0);
}

int main(int argc, char *argv[]){
	int i;
	int j;
	int k;
	i = argc -1;
	k = 0;
	while(i > 0){
		j = 0;
		while(argv[i][j] != '\0'){
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i--;
		k++;
	}
	return (0);
}          
