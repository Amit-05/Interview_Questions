//Binary to decimal conversion
#include<stdio.h>

int main()
{
	int n,temp=0,i=0;
	printf("Enter the binary to convert it into decimal\n");
	scanf("%d",&n);
	while(n)
	{
		(n%10)?(temp = temp|(1 << i)):(temp = temp|(0 << i));
		n = n/10;
		i++;
	}
	printf("%d\n",temp);
	return 0;
}
