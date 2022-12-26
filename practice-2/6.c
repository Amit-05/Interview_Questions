//Rotation of square Matrix 90 degree clockwise
#include<stdio.h>
#define n 4
int a[n][n] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
int i,j,temp;
int main()
{
	for(i=0;i<n/2;i++)
	{
		for(j=i;j<n-i-1;j++)
		{
			temp = a[i][j];
			a[i][j] = a[n-1-j][i];
			a[n-1-j][i] = a[n-1-i][n-1-j];
			a[n-1-i][n-1-j] = a[j][n-1-i];
			a[j][n-1-i] = temp; 			
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}
