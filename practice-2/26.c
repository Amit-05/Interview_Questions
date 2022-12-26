//Custom made strrchr function
#include<stdio.h>
#include<string.h>

char *custom_strrchr(char *,char );

int main()
{
	char str[] = "Hello World";
	printf("Original Strrchr = %s\n",strrchr(str,'l'));
	char *s,ch;
	printf("Enter the character which you are looking for in string\n");
	scanf(" %c",&ch);
	s = custom_strrchr(str,ch);
	printf("Custom Made = %s\n",s);
	return 0;
}
char *custom_strrchr(char *str,char ch)
{
	int len;
	len = strlen(str);
	for(len;len>=0;len--)
	{
		if(str[len] == ch)
		{
			return (&str[len]);
		}
	}
}
