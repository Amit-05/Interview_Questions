//Code to allocate memory to 2D array using pointer to an array 
//Number of Column is fix here
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int (*a)[3],row,i,j;
	printf("Enter the number of rows\n");
	scanf("%d",&row);
	a = (int (*)[3])malloc(row*3*sizeof(int));
	for(i=0;i<row;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the value in a[%d][%d]\n",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\r\nThe matrics is\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d] = %d ",i,j,a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
