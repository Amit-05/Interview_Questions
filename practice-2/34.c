//Decimal to binary conversion

#include<stdio.h>

int main()
{
	int n,temp=0,i=1;
	printf("Enter the number to convert in binary\n");
	scanf("%d",&n);
	while(n)
	{
		if(n%2)
			temp = (temp + ((n%2)*i));
		n=n/2;
		i=i*10;
	}
	printf("%d\n",temp);
	return 0;
}
