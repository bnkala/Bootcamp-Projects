#include <stdio.h>
#include <unistd.h>
#include <math.h>

int ft_iterative_power(int nb, int power){
	int result;
	int i;
	if (power <0){
		return 0;
	}
	if (power == 0){
		return 1;
	}
	i = 1;
	result = nb;
	while(i < power){
		result = result * nb;
		i++;
	}
	write(1, &result, 1);
	return result;
}

int main(){
	ft_iterative_power(2, 3);
	return (0);
}
