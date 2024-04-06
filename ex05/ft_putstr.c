#include <unistd.h>
void ft_putstr(char *str)
{
	while(*str)
	{
		char letra=*str;
		write(1,&letra,1);
		str++;
	}
}
