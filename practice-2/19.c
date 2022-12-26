//custom AtoI Function
#include<stdio.h>

int custom_atoi(char *);

int main()
{
	int number;
	char str[] = "-9623568";
	number = custom_atoi(str);
	printf("%d\n",number);
}
int custom_atoi(char *ptr)
{
	int i=0,number=0;
	if(ptr[0] == '-')
		i++;
	for(;ptr[i];i++)
	{
		if(ptr[i] >= '0' && ptr[i] <= '9')
		{
			number = number*10 + ((ptr[i] - 48));	
		}
	}
	if(ptr[0] == '-')
	{
		number = -number;
	}
	return number;	
}
