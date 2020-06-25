#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

void ft_print_comb(void){
	char c;
	char x;
	char i;

	c = '0';
	while(c <= '7'){
		x = '1';
		while(x <= '8'){
			i = '2';
			while(i <= '9'){
				ft_putchar(c);
				ft_putchar(x);
				ft_putchar(i);
				if (c != '7' || x != '8' || i != '9'){
					ft_putchar(',');
					ft_putchar(' ');
				}
				i++;
			}
			x++;
		}
		c++;
	}

}

int main(){
	ft_print_comb();
	return(0);
}
