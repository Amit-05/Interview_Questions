//Bounding of string in some digits
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char *w1,*w2,*w3,*w4,*w5;
	unsigned long b1,b2,b3,b4,b5;
	w1 = (char *)malloc(sizeof(char *));
	w2 = (char *)malloc(sizeof(char *));
	w3 = (char *)malloc(sizeof(char *));
	w4 = (char *)malloc(sizeof(char *));
	w5 = (char *)malloc(sizeof(char *));
	printf("Give the Weights\n");
	scanf("%lu%lu%lu%lu%lu",&b1,&b2,&b3,&b4,&b5);
	printf("B1 = %lu\nB2 = %lu\nB3 = %lu\nB4 = %lu\nB5 = %lu\n",b1,b2,b3,b4,b5);
	if((b1 >= 1) && (b1<=5000))
	{
		sprintf(w1,"%lu",b1);
		printf("weight-1 = %s\n",w1);
	}
	else
	{
		b1 = 0;
		sprintf(w1,"%lu",b1);
		printf("weight-1 = %s\n",w1);
	}
	if((b2 >= 1) && (b2<=5000))
	{
		sprintf(w2,"%lu",b2);
		printf("weight-2 = %s\n",w2);
	}
	else
	{
		b2 = 0;
		sprintf(w2,"%lu",b2);
		printf("Weight-2 = %s\n",w2);
	}
	if((b3 >= 1) && (b3<=5000))
	{
		sprintf(w3,"%lu",b3);
		printf("weight-3 = %s\n",w3);
	}
	else
	{
		b3 = 0;
		sprintf(w3,"%lu",b3);
		printf("Weight-3 = %s\n",w3);
	}
	if((b4 >= 1) && (b4<=5000))
	{
		sprintf(w4,"%lu",b4);
		printf("weight-4 = %s\n",w4);
	}
	else
	{
		b4 = 0;
		sprintf(w4,"%lu",b4);
		printf("Weight-4 = %s\n",w4);
	}
	if((b5 >= 1) && (b5<=5000))
	{
		sprintf(w5,"%lu",b5);
		printf("weight-5 = %s\n",w5);
	}
	else
	{
		b5 = 0;
		sprintf(w5,"%lu",b5);
		printf("Weight-5 = %s\n",w5);
	}
}
