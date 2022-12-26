//Code to split single linked list in two half 
//Example Input List = 1 2 3 4 5 6 7 8 9 10
//Output List_1 = 1 2 3 4 5
//Output List_2 = 6 7 8 9 10

#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int roll;
	struct student *link;
}st;

void add_begin(st **);
void print(st *);
void split_list(st **,st **);

int main()
{
	st *hptr=0,*s_hptr;
	char ch;
	do{
		add_begin(&hptr);
		printf("Do you want to add node(y/n)?\n");
		scanf(" %c",&ch);
	}while(ch == 'y' || ch == 'Y');
	printf("\n------------------Original List-----------------\n");
	print(hptr);
	split_list(&hptr,&s_hptr);
	printf("\n------------------First List-----------------\n");
	print(hptr);
	printf("\n-----------------Second List-----------------\n");
	print(s_hptr);
	printf("\n");
	return 0;
}

void split_list(st **original_list,st **second_list)
{
	st *slow,*fast;
	slow=fast=*original_list;
	while(fast->link!=0 && fast->link->link!=0)
	{
		slow = slow->link;
		fast = fast->link->link;
	}
	*second_list = slow->link;
	slow->link = 0;
}
void add_begin(st **ptr)
{
	st *temp;
	temp = (st *)malloc(sizeof(st));
	printf("Enter the data\n");
	scanf("%d",&temp->roll);
	if(*ptr == 0)
	{
		temp->link = 0;
		*ptr = temp;
	}
	else
	{
		temp->link = *ptr;
		*ptr = temp;
	}
}

void print(st *ptr)
{
	while(ptr)
	{
		printf("%d\t",ptr->roll);
		ptr = ptr->link;
	}
}
