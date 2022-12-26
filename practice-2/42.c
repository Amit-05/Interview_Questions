//Code to check number is power of two or not

#include<stdio.h>

int logic_1(int );
int logic_2(int );

int main()
{
	int num=0,result=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	result = logic_1(num);
	if(result == 1)
		printf("Given number is power two\n");
	else
		printf("Given number is not Power of two\n");
	result = logic_2(num);
	if(result == 1)
		printf("Given number is power two\n");
	else
		printf("Given number is not Power of two\n");
	return 0;
}

int logic_1(int num)
{
	char i=0,bit_count=0;
	for(i=31;i>=0;i--)
	{
		if((num >> i)&0x01)
			bit_count++;
	}
	if(bit_count > 1)
		return 0;
	else
		return 1;
}

int logic_2(int num)
{
	char bit_count = 0;
	while(num)
	{
		bit_count += num & 0x01;
		num = num >> 1;
	}
	if(bit_count > 1)
		return 0;
	else
		return 1;
}
