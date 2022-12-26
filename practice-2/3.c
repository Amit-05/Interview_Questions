//Code to pass 2-D array to the function
#include<stdio.h>
#include<stdlib.h>

int arr[5][5],r,j;
void My_func(int a[][5],int r);

int main()
{
	printf("Enter the values in raw\n");
	for(r=0;r<5;r++)
	{
		for(j=0;j<5;j++)
			scanf("%d",&arr[r][j]);
	}
	My_func(arr,5);
/*	for(r=0;r<5;r++)
	{
		for(j=0;j<5;j++)
			printf("%d ",arr[r][j]);
		printf("\n");
	}*/
	return 0;	
}

void My_func(int a[][5],int r)
{
	int i;
	for(i=0;i<r;i++)
	{
		for(j=0;j<5;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}
}
