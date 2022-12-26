//Find next Immideate number from given number which binary is having same number of 1's and 0's
#include<stdio.h>
int n;
char i=0,one=0,zero=0,one_next=0,zero_next=0;
void firstnumber_binary(int number);
int main()
{
	printf("Enter the number\n");	
	scanf("%d",&n);
	firstnumber_binary(n);
	while(1)
	{
		one_next = 0; zero_next = 0;
		n++;
		for(i=31;i>=0;i--)
		{
			if((n >> i) & 1)
			{
				one_next++;
			}
			else
			{		
				zero_next++;
			}
		}
		if((one == one_next)&&(zero == zero_next))
		{
			break;
		} 
	}
	printf("\none = %d,zero = %d,n = %d\n",one_next,zero_next,n);
	return 0;
}
void firstnumber_binary(int number)
{
	for(i=31;i>=0;i--)
	{
		if((number >> i) & 1)
		{
		//	printf("1");
			one++;
		}
		else
		{		
		//	printf("0");
			zero++;
		}
	}
	printf("\none = %d,zero = %d,n = %d\n",one,zero,number);
}
