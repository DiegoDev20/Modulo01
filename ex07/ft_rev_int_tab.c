void ft_rev_int_tab(int *tab, int size)
{
	int temp[size];
	int i=0;
	while(size>0)
	{
		temp[i]=tab[size-1];
		size--;
		i++;
	}
	int j=0;
	while(j<i)
	{
		tab[j]=temp[j];
		j++;
	}
}
