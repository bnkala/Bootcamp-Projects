int ft_recursive_factorial(int nb){
	int result;
	int num;
	num = 1;
	result = 1;
	while (num <= nb){
		if (nb < 0){
			return 0;
		}
		num++;
	}
	return result;

}
