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
	return result;
}

