//Sorting of array in descending order
#include<stdio.h>

int arr[10] = {10,5,7,4,9,1,8,3,6,2};
int main(void)
{
	int i,j,ele,n;
	for(i=0;i<((sizeof(arr)/sizeof(arr[0])));i++)
	{
		for(j=0;j<((sizeof(arr)/sizeof(arr[0])));j++)
		{
			if(arr[j] < arr[j+1])
			{
				ele = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = ele;
			}
		}
	}
	for(i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
