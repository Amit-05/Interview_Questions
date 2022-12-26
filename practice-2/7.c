//Code to swap first and last byte of Integer number
#include<stdio.h>

int main()
{
	int M = 0x00001234,i;
	unsigned char *p,*q,temp;
//	printf("Enter the NUmber\n");
//	scanf("%d",&M);
	printf("M = %X\n",M);
	p = &M;
	q = &M;
	q = q + 3;
		temp = *p;
		*p = *q;
		*q = temp;
/*	for(i=31;i>=0;i--)
	{
		if(M & (1 << i))
			printf("1");
		else
			printf("0");
	}*/
	printf("M = %X\n",M);
	printf("\n--------------------------------\n");
/*	M = (M<<24);
	for(i=31;i>=0;i--)
	{
		if(M & (1 << i))
			printf("1");
		else
			printf("0");
	}
	printf("\n");*/
	return 0;
}
