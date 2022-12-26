//Multiplying two numbers using bitwise operator
#include<stdio.h>

int main()
{
	int n1 = 5,n2 = 4,result=0;
	while(n2 > 0)
	{
		if(n2 & 1)
			result = result + n1;
		n1 = n1 << 1;
		n2 = n2 >> 1;
	}
	printf("%d\n",result);
	return 0;
}
