//Printing 1 to N numbers without using semicoloumn
#include<stdio.h>

int main()
{
	int N,i=1;
	printf("Enter the number to print upto\n");
	scanf("%d",&N);
	while((i<=N)&&(printf("%d\t",i++))){}
	printf("\n");
}
