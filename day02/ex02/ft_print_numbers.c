#include <stdio.h>
#include <unistd.h>
int ft_putchar(char num){
	write(1, &num, 1);
	return (0);
}

void ft_print_numbers(void){
	char x;
	x = '0';
	while (x <= '9'){
		ft_putchar(x);
		x++;
	}
	
}

int main(){
	ft_print_numbers();
	return(0);
}
