#include <stdio.h>

void ft_sort_integer_table(int *tab, int size){
	int i;
	int x;
	int temp;

	i = 0;
	while(i < size){
		x = 0;
		while(x < (size - 1)){
			if (tab[x] > tab[x + 1]){
				temp = tab[x];
				tab[x] = tab[x + 1];
				tab[x + 1] = temp;
			}
			x++;
		}
		i++;
	}

}
