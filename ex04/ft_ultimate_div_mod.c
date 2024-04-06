
void ft_ultimate_div_mod(int *a, int *b)
{
	if(*b==0)
	{
		return;
	}
	int num1=*a;
	int num2=*b;
	*a=num1/num2;
	*b=num1%num2;
} 
