//Reverse Double link list
#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int roll;
	struct student *link;
	struct student *prv;
}st;

void add_end(st **ptr);
void print(st *ptr);
void rev_link(st **ptr);
void rev_print(st *ptr);
int main()
{
	st *hptr = 0;
	char ch;
	do{
		add_end(&hptr);
		printf("Do you want to add new node(y/n)\n");
		scanf(" %c",&ch);
	}while(ch == 'Y' || ch == 'y');
	print(hptr);
//	rev_link(&hptr);
//	print(hptr);
	rev_print(hptr);
	return 0;
}

void add_end(st **ptr)
{
	st *temp;
	static st *last;
	temp = (st *)malloc(sizeof(st));
	printf("Enter the roll number\n");
	scanf("%d",&temp->roll);
	if(*ptr == 0)
	{
		temp->link = temp->prv = *ptr;
		*ptr = temp;
	}
	else
	{
		temp->link = last->link;
		temp->prv = last;
		last->link = temp;
	}
	last = temp;
}

void rev_link(st **ptr)
{
	st *temp;
	while(*ptr)
	{
		temp = (*ptr)->prv;
		(*ptr)->prv = (*ptr)->link;
		(*ptr)->link = temp;
		(*ptr) = (*ptr)->prv;
	}	
	*ptr = temp->prv;
}
void rev_print(st *ptr)
{
	while((ptr->link) != 0)
	{
		ptr = ptr->link;
	}
	while(ptr)
	{
		printf("%d\n",ptr->roll);
		ptr = ptr->prv;
	}
}
void print(st *ptr)
{
	while(ptr)
	{
		printf("%d \n",ptr->roll);
		ptr = ptr->link;
	}
}
