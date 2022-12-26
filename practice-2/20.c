//Reverse single link list and sort it according data
#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int roll;
	struct student 	*link;
}st;

void add_end(st **ptr);
void print(st *ptr);
void reverse_list(st **ptr);
void sort_list(st **ptr);

int main()
{
	st *hptr = 0;
	char ch;
	do{
		add_end(&hptr);
		printf("Do you want to add data(y/n)");
		scanf(" %c",&ch);	
	}while(ch == 'y' || ch == 'Y');
	print(hptr);
	reverse_list(&hptr);
	print(hptr);
	sort_list(&hptr);
}

void add_end(st **ptr)
{
	st *temp;
	static st *last;
	temp = (st *)malloc(sizeof(st));
	printf("Enter the student data\n");
	scanf("%d",&temp->roll);
	if(*ptr == 0)
	{
		*ptr = temp;
		temp->link = 0;
		last = temp;
	}
	else
	{
		temp->link = last->link;
		last->link = temp;
		last = temp;
	}
}

void print(st *ptr)
{
	while(ptr)
	{
		printf("%d\n",ptr->roll);
		ptr = ptr->link;
	}
}

void reverse_list(st **ptr)
{
	printf("Entered\n");
	static st *q=0;
	st *r;
	while(*ptr)
	{
		r = q;
		q = *ptr;
		*ptr = (*ptr)->link;
		q->link = r;
	}
	*ptr = q;
//	printf("5 = %d\n",(*ptr)->roll);
}
void sort_list(st **ptr)
{
	printf("Entered\n");
	st *p[10];
	int i=0,j=0,count=0,temp;
	while(*ptr)
	{
		p[count++] = *ptr;
		*ptr = (*ptr)->link;
	}
	for(i=0;i<count-1;i++)
	{
		for(j=0;j<count-i-1;j++)
		{
			if(p[j]->roll < p[j+1]->roll)
			{
				temp = p[j] ->roll;
				p[j]->roll = p[j+1]->roll;
				p[j+1]->roll = temp;
			}
		}
	}
	for(i=0;i<count;i++)
	{		
		printf("%d\n",p[i]->roll);
	}
}
