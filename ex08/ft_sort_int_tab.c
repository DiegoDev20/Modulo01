
void ft_sort_int_tab(int *tab, int size)
{
	int i=0;
	while(i<size)
	{
		int u=0,c=1;
		while(c<size)
		{
			if(tab[u]>tab[c])
			{
				int temp=tab[c];
				tab[c]=tab[u];
				tab[u]=temp;
			}
			c++;
			u++;
		}
		i++;
	}
}
