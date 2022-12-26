//String rotate left or right
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *rotate_right(const char *str,int n)
{
	int len = strlen(str);
	char *s,ch;
	s = (char *)malloc(sizeof(len)+1);
	int i,j,k,l;
	if(n > len)
		return ("Wrong rotation number");
	else
	{
		/*if you use logic two then comment below line*/
		/*---------logic No.1 = same address space-------*/
		strcpy(s,str);
		for(i=0;i<n;i++)
		{
			ch = s[len-1];
			for(j=len-1;j>=0;j--)
				s[j] = s[j-1];
			s[++j] = ch;
		}
		/*------------or------------*/
		/*---------logic No.2 = different space-------*/
		//for(i=1;i<=n;i++)
		//{
			/*for(j=0,l=len-n;j<i;j++,l++)
				s[j] = str[l];
			for(k=0;k<((strlen(str))-n);j++,k++)
				s[j] = str[k];*/
	//	}
	return s;
	}
}
char *rotate_left(const char *str,int n)
{
	int len = strlen(str);
	char *s,ch;
	s = (char *)malloc(sizeof(len)+1);
	int i,j,k,l;
	if(n > len)
		return ("Wrong rotation number");
	else
	{
		/*--------logic No.1 = using Same address space rotate*/
		/*strcpy(s,str);
		for(i=0;i<n;i++)
		{
			ch = s[0];
			for(j=0;j<len;j++)
				s[j] = s[j+1];
			s[--j] = ch;
		}*/
		/*-----------or----------*/
		/*--------logic No.2 = using different address space rotate*/
		for(i=1;i<=n;i++)
		{
			for(j=0,l=i;j<len;j++,l++)
				s[j] = str[l];
			for(k=0,j=len-i;k<i;j++,k++)
				s[j] = str[k];
		}
	return s;
	}
}
int main()
{
	int num;
	char *s;
	char str[20];
	printf("Enter the string rotate\n");
	scanf("%s%d",str,&num);
	s = (char *)malloc(sizeof(str));
	s = rotate_right(str,num);
	printf("%d times Rotated right = %s\n",num,s);
	s = rotate_left(str,num);
	printf("%d times Rotated left= %s\n",num,s);
	return 0;
}
