#include <unistd.h>
#include <stdio.h>



int ft_putchar(char c){
	write(1, &c, 1);
	return(0);
}

void ft_print_alphabet(void){
	char l;
	l = 'a';
	while (l <= 'z'){
		ft_putchar(l);
		l++;
	}
	
}


