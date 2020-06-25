#include <unistd.h>
#include <stdio.h>

int ft_recursive_factorial(int nb){
	int result;
	int num = 1;
	result = 1;
	char c;
	while (num <= nb){
		if (nb < 0){
			result = nb * (nb-1);
			return 0;
		}
		num++;
	}
	c = result;
	write(1, &c, 1);
	return result;

}

int main(){
	ft_recursive_factorial(4);
	return (0);
}
