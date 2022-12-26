//Find the number at particular index after number of rotation anticlock wise
//
//Number of rotation and index needs to be taken from user

#include<stdio.h>

int arr[5] = {30,9,50,42,2};
int rotation=0,i_dex=0,i,j,temp,count=0;

int main()
{
	printf("Enter the number of rotation and index\n");
	scanf("%d %d",&rotation,&i_dex);
	for(i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
	{
		//printf("arr[%d] = %d\t",i,arr[i]);
		if(count != rotation)
		{
			count++;
			temp = arr[0];
			for(j=0;j<(sizeof(arr)/(sizeof(arr[0])));j++)
			{
//				printf("arr[%d] = %d\t",j,arr[j]);	
				arr[j] = arr[j+1];
			}
			arr[--j] = temp;
			//printf("%d",arr[j]);
		}
		else
		{
			count = 0;
			for(j=0;j<(sizeof(arr)/(sizeof(arr[0])));j++)
			{
				printf("arr[%d] = %d\t",j,arr[j]);	
			}
			printf("\nGiven index value is %d\n",arr[i_dex]);
			break;
		}
	}
	return 0;
}
