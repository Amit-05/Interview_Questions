//some string operations
#include<stdio.h>
#include<stdlib.h>

char *str;
void read_string();

int main()
{
	str = (char *)malloc(sizeof(char)*10);
	printf("Enter the string : \n");
	scanf("%[^\n]",str);
//	printf("%s\n",str);
	read_string();
	return 0;
}
void read_string()
{
	char str1[9],i;
	for(i=0;i<=3;i++)
	{
		str1[i] = str[i];
	}
	str1[i] = '\0';
	printf("%s\n",str1);
}
