#include <stdio.h>
#include <math.h>
#include <unistd.h>

int ft_is_prime(int nb){
	int i;
	int prime;
	i = 2;
	while (nb % i != 0){
		i++;
	}

	if (nb == i){
		prime = 1;
	}else {
		prime = 0;
	}
	return prime;
}

int main(){
	ft_is_prime(9);
	return (0);
}
