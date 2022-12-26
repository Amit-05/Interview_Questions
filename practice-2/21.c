//Design a function will take arguments as an one array,and one number and returns a number if it is present in an array  else returns null
#include<stdio.h>
#include<stdlib.h>

int *number_search(int *,int ,int );
int main()
{
	int a[] = {-1,1,2,3,4,5,6,-10,0};
	int ele = sizeof(a)/sizeof(a[0]);
	printf("%d\n",ele);
	int number,*result;
	printf("Enter the number which you want to search in available array\n");
	scanf("%d",&number);
	result = number_search(a,number,ele);
	if(result == 0)
		printf("Not found \n");
	else
		printf("%d\n",*result);
		
}

int *number_search(int *p,int number,int ele)
{
	printf("Entered\n");
	int i=0;
	for(i=0;i < ele;i++)
	{
		if(p[i] == number)
		{
			return &p[i];
		}
	}
	return (int *)0;
}
