//C code to convert little endian to big endian
#include<stdio.h>

void using_bitwise(int *num)
{
	*num = (((*num & 0x000000FF) << 24) | ((*num & 0x0000FF00) << 8) | ((*num & 0x00FF0000)>>8) | ((*num & 0xFF000000)>>24));
	return;
}


int main(void)
{
	int i=0;
	int num = 0x12345678;
	printf("0x%x\n",num);
	using_bitwise(&num);
	printf("0x%x\n",num);
	return 0;
}


