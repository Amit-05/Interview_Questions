/* C code to convert all the zeros into once in given integer number
Examples
--------
		Input  			Output							
		-----			------
	1.	int a = 123005;      	a = 123115;
	2.	int b = 15900300    	b = 15911311
	3.	int c = 10000063	c = 11111163


*/
#include<stdio.h>


int main()
{
	unsigned int a;
	printf("Enter the valid integer number\n");
	scanf("%d",&a);
	unsigned int num = a;
	int i = 1;
	while(num)	
	{
		if((num%10)==0)  
		{
			//If modulo operation is true add the result 
			a = a + i;
		}
		i=i*10;
		num = num/10;
	}
	printf("Result = %d\n",a);
	return 0;
} 
