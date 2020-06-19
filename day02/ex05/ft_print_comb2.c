#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c){
	write(1, &c, 1);
	return 0;
}

void ft_print_comb2(void){
	char th;
	char h;
	char t;
	char u;

	th = '0';
	while(th <='9'){
		h = '0';
		while (h <= '8'){
			t = '0';
			while(t <= '9'){
				u = '0';
				while(u <= '9'){
					ft_putchar(th);
					ft_putchar(h);
					ft_putchar(' ');
					ft_putchar(t);
					ft_putchar(u);
					if (th != '9' || h != '8' || t != '9' || u != '9'){
						ft_putchar(',');
						ft_putchar(' ');
					}
					u++;
				}
				t++;
			}
			h++;
		}
		th++;
	}
}


