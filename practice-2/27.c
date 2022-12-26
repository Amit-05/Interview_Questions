
#include<stdio.h>

void largeststring(char *p,int k);
char *sortstring(char *p);
char *rearrange(char *p,int k);

int main()
{
	char s[20];int k;
	printf("Enter the string and number\n");
	scanf("%[^\ns] %d",s,&k);
//	printf("in main = %s\n",s);
	largeststring(s,k);
	return 0;
}

void largeststring(char *p,int k)
{
	printf("in fun = %s,%d\n",p,k);
	char *s = sortstring(p);
	printf("after sort = %s\n",s);
	char *str = rearrange(s,k);
	printf("after rearrange = %s\n",str);	
}

char *rearrange(char *p,int k)
{
	int i,j,flage=0,count = 0;char ch;
lable:	for(i=0,count=0;p[i];i++)
	{
		//printf("%c\t",p[i]);
		if(p[i] == p[i+1])
		{
			count++;
			if(p[i+1] == p[i+2])
			{
				count++;
				if(count == k)
				{	
					ch = p[i+2];
					p[i+2] = p[i+3];
					p[i+3] = ch;
		//			printf("%d %c %c\n",count,p[i+2],p[i+3]);
					flage=1;
					count = 0;
				}
			}
		}
	//	printf("%s\n",p);
	}
	if(flage == 1)
	{
		flage = 0;
		goto lable;
	}
	return p;
}
char *sortstring(char *p)
{
	int i,j;
	char ch;
	for(i=0;p[i];i++)
	{
		for(j=0;p[j];j++)
		{
			if(p[i] >= p[j])
			{
				ch = p[i];
				p[i] = p[j];
				p[j] = ch;
			}
		}
	}
	return p;
}
