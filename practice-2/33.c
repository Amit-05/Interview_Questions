//Decimal to hexadecimal conversion

#include<stdio.h>

int main()
{
	int n,temp=0,str[10],i=0;
	printf("Enter the number to convert in hex\n");
	scanf("%d",&n);
	while(n)
	{
		temp = n%16;
		if(temp<=9)
			str[i++] =temp+48; 
		else if(temp>=10 && temp <= 15)
			str[i++] =temp+55;
	       	n=n/16;	
	}
	for(--i;i>=0;i--)
		printf("%c",str[i]);
	printf("\n");
	return 0;
}
