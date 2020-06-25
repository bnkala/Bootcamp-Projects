#include <stdio.h>
#include <unistd.h>
#include <math.h>

int ft_recursive_power(int nb, int power){
	 if(power < 0){
		 return 0;
	 }
	 if (power ==  0) {
		 return 1;
	 }
	 if (power > 0){
		 return ( nb * ft_recursive_power(nb, power -1));
	 }
	 return 0;
}

int main(){
	char c;
	c = ft_recursive_power(2,3);
	write(1, &c, 1);
	return (0);
}
