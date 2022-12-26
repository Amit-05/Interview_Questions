//Code to allocate memory to 3D array or matrics

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ***a,i,j,k,l,col,row;
	printf("Enter the number of 2D array\n");
	scanf("%d",&k);
	printf("Enter the number of rows\n");
	scanf("%d",&row);
	printf("Enter the number of cols\n");
	scanf("%d",&col);
	a = (int ***)malloc(k*sizeof(int **));
	for(i=0;i<row;i++)
		a[i] = (int **)malloc(row*sizeof(int *));
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			a[i][j] = (int *)malloc(col*sizeof(int));
	for(i=0;i<k;i++)
	{
		for(j=0;j<row;j++)
		{
			for(l=0;l<col;l++)
			{
				printf("Enter the value for a[%d][%d][%d]\n",i,j,l);
				scanf("%d",&a[i][j][l]);
			}
		}
	}
	printf("\r\n And 3D array is \n");	
	for(i=0;i<k;i++)
	{
		printf("\na[%d] 2D array\n",i);
		for(j=0;j<row;j++)
		{
			for(l=0;l<col;l++)
			{
				printf("a[%d][%d] = %d ",j,l,a[i][j][l]);
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("%d\n",*(*(*(a+0)+1)+1));
	//printf("%d\n",*(*(*(a+0[2d array number])+1[Row of 2d array])+1[column of 2D array]));	
}
