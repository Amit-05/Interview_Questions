//Code to find number of set bit in given number

#include<stdio.h>

int logic_1(int num);
int logic_2(int num);

int main()
{
	int num=0,set_bit_count=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	set_bit_count = logic_1(num);
	printf("NUmber of set bit in %d = %d\n",num,set_bit_count);
	set_bit_count = logic_2(num);
	printf("NUmber of set bit in %d = %d\n",num,set_bit_count);
	return 0;
}

int logic_1(int num)
{
	static int set_bit_count = 0;
	char i=0;
	for(i=31;i>=0;i--)
	{
		if((num >> i)&0x01)
			set_bit_count++;
	}
	return set_bit_count;
}

int logic_2(int num)
{
	static int set_bit_count = 0;
	while(num)
	{
		set_bit_count += num & 0x01;
		num = num >> 1;
	}
	return set_bit_count;
}
