#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

void ft_print_combn(int n){
	char t;
	char u;
	if (n >= 0 && n <= 10){
		t = '0';
		while (t <= '8'){
			u = '0';
			while (u <= '9'){
				ft_putchar(t);
				ft_putchar(u);
				if (t != '8' || u != '9'){
					ft_putchar(',');
					ft_putchar(' ');
				}
				u++;
			}
			t++;
		}
		
	}
	else {
		ft_putchar('0');
	}

}

int main(){
	ft_print_combn(5);
	return(0);
}
