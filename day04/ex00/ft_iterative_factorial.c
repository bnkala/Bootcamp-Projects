#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb){
	int num;
	int result;
   char c;	
	num = 1;
	result = 1;
	while(num <= nb){
		result = result * num;
		num++;
	}
	c = result;
	write(1, &c, 1);
	return result;
}

