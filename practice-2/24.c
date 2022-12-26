//Queue using single linklist
#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int roll;
	struct student *link;
}st;

void add_end(st **ptr);
void print(st *ptr);
void delete_node(st **ptr);

int main()
{
	st *hptr = 0;
	char ch;
	while(1)
	{
		printf("Choose an option\r\n1.Push data\r\n2.Pop data\r\n3.display data\r\n4.stop\r\n");
		scanf(" %c",&ch);
		switch(ch)
		{
			case '1' : add_end(&hptr);
				   break;
			case '2' : delete_node(&hptr);
				   break;
			case '3' : print(hptr);
				   break;
			case '4' : return 0;
		}
	}
}
void add_end(st **ptr)
{
	st *temp;
	st *last;
	last = *ptr;
	temp = (st *)malloc(sizeof(st));
	printf("Enter the roll number\n");
	scanf("%d",&temp->roll);
	if(*ptr == 0)
	{
		temp->link = temp;
		*ptr = temp;
	}	
	else
	{
		while(last->link != (*ptr))
			last = last->link;
		temp->link = last->link;
		last->link = temp;
	}
	//last = temp;
	//printf("last = %d\n",last->roll);
}
void delete_node(st **ptr)
{
	if(*ptr == 0)
	{
		printf("Stack is empty\n");
		return;
	}
	else
	{
		st *temp,*last;
		temp = *ptr;
		last = *ptr;
		while(last->link != (*ptr))
		{
			last = last->link;
		}
	 	last->link = temp->link;
		*ptr = temp->link;
		free(temp);
	}
}
void print(st *ptr)
{
	if(ptr == 0)
	{
		printf("stack is empty\n");
		return;
	}
	else
	{
		st *temp;
		temp = ptr;
		while(1)
		{
			printf("%d ",ptr->roll);
			ptr = ptr->link;
			if(ptr == temp)
				break;
		}
		printf("\n");
	}
}
