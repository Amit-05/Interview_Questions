//Ip conversion code 
//For Example
//Input :- 127.0.0.1   Expected O/p :- 7F000001
//Input :- 192.168.75.25 Expected O/p :- C0A84B19
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<arpa/inet.h>

char *reverse_string(char *str)
{
	int i,l,count=0;
	char ch=0;
	for(l=0;str[l];l++);
	for(i=2,l=l-2;i<l;i++,l++)
	{
		ch = str[i];
		str[i] = str[l];
		str[l] = ch;
		count++;
		if(count == 2)
		{
			count = 0;
			l = l-4;
		}
	}
	return str;
}

char *conversion(char *str)
{
	int addr = inet_addr(str);
	printf("addr = %x\n",addr);
	char *s = (char *)malloc(sizeof(char)*16);
	sprintf(s,"0x%08X",addr);
	printf("string = %s\n",s);
	s = reverse_string(s);
	return s;
}

int main()
{
	char s[16];
	printf("Enter the Ip add :\n");
	scanf("%s",s);
	char *res = (char *)malloc(sizeof(char)*16);
	printf("%s    \n",s);
	res = conversion(s);
	printf("%s\n",res);
	return 0;
}
