#include <stdio.h>
#include <unistd.h>

void ft_ft(int *nbr){
	char c;
	*nbr = 42;
	c = *nbr;
	write(1, &c, 1);
}

int main(){
	int n;
	ft_ft(&n);
	return(0);
}
