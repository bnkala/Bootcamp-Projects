#include <stdio.h>
#include <unistd.h>
#include <math.h>

int ft_sqrt(int nb){
	int sqr;
	char x;


	sqr = 1; 
	if (nb < 0) {
		return 0;
	}
	while (sqr * sqr < nb){
		sqr++;
	}
	if(sqr * sqr == nb){
		x = sqr;
		write(1, &x, 1);
		return sqr;
	}
	return sqr;
}

int main(){
	return (0);
}
