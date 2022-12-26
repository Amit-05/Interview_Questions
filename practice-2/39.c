//Add two numbers using bitwise operator
#include<stdio.h>

int main()
{
	int x=4,y=5,carry=0;
	while(y != 0)
	{
		carry = x & y;
		x = x ^ y;
		y = carry << 1;
	}
	printf("%d\n",x);
}
