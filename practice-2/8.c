//Prime number
#include<stdio.h>

int main()
{
	int n=5,i,c=0,count=0,j=1;
//	printf("Enter the number :\n");
//	scanf("%d",&n);

	for(j=0;j<=10;j++)
	{
		for(i=2;i<=j;i++)
		{
			if(j%i == 0)
			{
				break;
			}
		}
		if(i == j)
		{
			count++;
		}
	}	
	printf("%d\n",count);
	return 0;
}
