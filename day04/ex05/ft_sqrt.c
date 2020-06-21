int ft_sqrt(int nb){
	int sqr;
	
	sqr = 1; 
	if (nb < 0) {
		return 0;
	}
	while (sqr * sqr < nb){
		sqr++;
	}
	if(sqr * sqr == nb){
		return sqr;
	}
	return(0);
}
