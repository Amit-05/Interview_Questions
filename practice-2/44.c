//Direct comparision between two constant string and two dynamically allocated memory string
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *s,*f;
	char *a = "AMIT";
	char *p = "AMIT";
	s = (char *)malloc(sizeof(char)*10);
	printf("Provide the string\n");
	scanf("%s",s);
	f = (char *)malloc(sizeof(char)*10);
	printf("Provide the string\n");
	scanf("%s",f);
	if(s && f)
	{	
		if(s == f)
			printf("Got Match\n");
		else
			printf("Oops strings are not same\n");
		if(a == p)
			printf("Got 2nd Match\n");
		else
			printf("Oops 2nd strings are not same\n");
		if(a == s)
			printf("Got Match\n");
		else
			printf("Oops strings are not same\n");
	}
	else
	{
		printf("Not able to get memory\n");
	}
	free(s);
	free(f);
	return 0;
}
