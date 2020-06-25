#include <stdio.h>
#include <unistd.h>
#include <string.h>
int ft_putchar(char x){
	write(1, &x, 1);
	return 0;
}

int main(int argc, char *argv[]){
	int i;
	i = 0;
	while(argv[0][i] != '\0' && i < argc){
		ft_putchar(argv[0][i]);
		i++;
	}
	ft_putchar('\n');
	return 0;
}
