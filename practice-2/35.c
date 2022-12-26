//Decimal to octal conversion

#include<stdio.h>

int main()
{
	int n,temp=0,i=1;
	printf("Enter the number to convert in octal\n");
	scanf("%d",&n);
	while(n)
	{
		if(n%8)
			temp = (temp + ((n%8)*i));
		n=n/8;
		i=i*10;
	}
	printf("%d\n",temp);
	return 0;
}
