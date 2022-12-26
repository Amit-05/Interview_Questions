//No instruction run after return statment
#include<stdio.h>
#include<stdlib.h>

char str[10];

char *my_func(void)
{
	printf("Enter the string\n");
	scanf("%[^\n]",str);
	printf("In func = %s\n",str); // This will execute everytime
	return str;
	printf("In func = %s\n",str); // This line wont execute
}
int main(void)
{
	char *ptr;
	ptr = malloc((sizeof(char))*10);
	ptr = my_func();
	printf("In main = %s\n",ptr);
	return 0;
}
