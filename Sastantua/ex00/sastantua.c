#include <stdio.h>
#include <unistd.h>

void sastantua(int size){
	int i;
	int space;
	int k;
	char sp;
	char st;
	char l;
	sp = ' ';
	st = '*';
	k = 0;
	l = '\n';
	
	i = 1;
	while(i <= size){
		space = 1;
		while(space <= size){
			write(1, &sp, 1);
			space++;
		}
	    while(k != 2 * i - 1){
			write(1, &st, 1);
			write(1, &sp, 1);
			k++;
		}
	    write(1, &l, 1);	
		i++;
	}


}

int main(){
	int i;
    int	space;
    int	rows;
    int k;
	k = 0;

	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	for(i = 1; i <= rows; i++, k =0){
		for (space =1; space <= rows - i; space++){
			printf(" ");
		}
		while(k != 2 * i - 1){
			printf("* ");
			k++;
		}
		printf("\n");
	}
	return 0;
}

/*
int main(){
	sastantua(15);
	return (0);
}*/
