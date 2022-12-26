//---------------------------------------------------------------------------------------
//input						Expected Output
//18-05-1995					18-05-1995
//23-13-2015					23-01-2016
//40-06-2011					10-07-2011
//50-02-2016					21-03-2016
//50-02-2015					22-03-2015
//---------------------------------------------------------------------------------------
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct cal
{
	int date;
	int month;
}v;
void get_date(int date,int month,int days)
{
	v.date = date - days;
	v.month = month + 1;
}
const char *find_correctdate(const char *str)
{
	char *s=(char *)malloc(sizeof(char)*10);
	char *res=(char *)malloc(sizeof(char)*10);
	int date,month,year,i=0,l=0;
	date = (str[0]-48)*10 + str[1]-48;
	month = (str[3]-48)*10 + str[4]-48;
	for(i=0,l=0;str[i];i++)
	{
		if(i>=6)
		{
			s[l++] = str[i];
		}
	}
	s[l] = '\0';
	year = atoi(s);
	if(month > 12)
	{
		if(date > 31)
			date = date - 31;
		month = 1;
		year = year + 1;
	}
	else
	{
			if(month == 2)
			{
				if((year%4)!=0)
				{
					if(date > 28)
					{
						get_date(date,month,28);
					}
				}
				else
				{
					if(date > 29)
					{
						get_date(date,month,29);
					}
				}
			}
			else
			{
				if(month >= 7)
				{
					if(((month%2==0)) || (month == 7))
					{
						if(date > 31)
						{
							get_date(date,month,31);
						}
					}
					else if(((month%2)!=0)&&(month!=7))
					{
						if(date > 30)
						{
							get_date(date,month,30);
						}
					}
				}
				else
				{
					if(((month%2)==0)&&(month!=2))
					{
						if(date > 30)
						{
							get_date(date,month,30);
						}
					}
					else if(((month%2)!=0))
					{
						if(date > 31)
						{
							get_date(date,month,31);
						}
					}
				}
			}

		
	}
	if((v.date == 0) && (v.month == 0))
		sprintf(res,"%d/0%d/%d",date,month,year);
	else
		sprintf(res,"%d/0%d/%d",v.date,v.month,year);
	return res;
}

int main()
{
	int i;
	char str[12];
	printf("Enter the date :\n");
	for(i=0;i<10;i++)
		scanf(" %c",&str[i]);
	str[i] = '\0';
	const char *ret = (char *)malloc(sizeof(char)*10);
       	ret = find_correctdate(str);
	printf("%s\n",ret);	
	return 0;
}
