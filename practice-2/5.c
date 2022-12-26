//Example of array of pointer
#include<stdio.h>
#include<stdlib.h>

// *a[4] = 2-D array of pointer
// *a = 1-D array of pointer
int *a,i;

int main()
{
	a = (int *)malloc(4*sizeof(int));
	printf("Enter the Elements of array\n");
	for(i=0;i<4;i++)
		scanf("%d",&a[i]);
	
	printf("----------------\n");
	for(i=0;i<4;i++)
		printf("%d ",a[i]);
	printf("\n");
	free(a);
	return 0;
}
