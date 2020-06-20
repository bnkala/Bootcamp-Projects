#include <stdio.h>
#include <unistd.h>

void ft_ft(int *nbr){
	*nbr = 42;
}

int main(){
	ft_ft(*42);
}
