#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

void ft_putnbr(int nb){
	int x;
	if(nb < 0){
		ft_putchar('-');
		x = nb * -1;
	}
	else {
		x = nb;
	}
	if(x >= 10){
		ft_putnbr(x / 10);
	}
	ft_putchar(x % 10 + 48);
} 

int main(){
	ft_putnbr(2);
	ft_putchar('\n');
	return(0);
}

