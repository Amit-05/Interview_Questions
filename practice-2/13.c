//Swapping any two nodes in given singly link list
#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int roll;
	struct student *link;
}st;
void add_begin(st **);
void print(st *);
void swap_node(st **,int ,int );
int main()
{
	int n1,n2;
	char ch;
	st *hp = NULL;
	do{
		add_begin(&hp);
		printf("Do you want to add more nodes(y/n)?\n");
		scanf(" %c",&ch);
	}while(ch == 'Y' || ch == 'y');
	print(hp);
	printf("Enter the roll number which you want to swap\n");
	scanf("%d %d",&n1,&n2);
	swap_node(&hp,n1,n2);
	print(hp);
	return 0;
}
void add_begin(st **ptr)
{
	st *temp;
	temp = (st *)malloc(sizeof(st));
	printf("Enter the roll number\n");
	scanf("%d",&temp->roll);
	
	if(*ptr == NULL)
	{
		temp->link = *ptr;
		*ptr = temp;
	}
	else
	{
		st *prv;
		prv = *ptr;
		while(prv->link != NULL)
			prv = prv->link;
		prv->link = temp;
		temp->link = NULL;
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
void swap_node(st **ptr,int n1,int n2)
{
	st *c1,*p1,*c2,*p2,*temp;
	c1=c2= *ptr;
	while(c1->roll != n1)
	{
		p1 = c1;
		c1 = c1->link;
	}
	while(c2->roll != n2)
	{
		p2 = c2;
		c2 = c2->link;
	}
	printf("c1 = %d,c2=%d\n",c1->roll,c2->roll);
	temp = c1->link;
	p1->link = c2;
	c2->link = c1->link;
}
