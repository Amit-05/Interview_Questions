#include<stdio.h>

int main()
{
	const char s[] = "Hello world";
//	s[1] = 'E'; //Error Bcz of trying to write read only memory
	int a = 257;
	char *b = (char *)&a;
	printf("%d\n",*b);
	int **p = (int **)&b;
	printf("%d\n",**p);
	return 0;
}
