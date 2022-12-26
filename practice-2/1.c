//Code to find number of occupied bits in given number

#include<stdio.h>

int num,count=0,i,bits=0;
int main()
{
	printf("Enter the Number : \n");
	scanf("%d",&num);
	for(i=31,count=0;i>=0;i--)
	{
		if(num & (1 << i))
		{
			bits = 32 - count;
			break;
		}
		count++;
	}
	printf("Number of occupied bits are %d in %d\n",bits,num);
	return 0;
}
