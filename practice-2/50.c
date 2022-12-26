//C code to accessing 2D array of structure pointer and each element of array is a head pointer of one linked list
#include<stdio.h>
#include<stdlib.h>

struct node{	
	int val;
	struct node *next;
}var;

void insert_node(struct node **p)
{
	//Function to insert node at end of the single linklist
	//printf("%d\n",(*p)->val);
	struct node *temp;
	static struct node *last = NULL;
	temp = (struct node *)malloc(sizeof(struct node));
	printf("Enter the value\n");
	scanf("%d",&temp->val);
	if((*p) == NULL)
	{
		printf("NULL\n");
		temp->next = NULL;
		*p = temp;
	}
	else
	{
		printf("Not NULL\n");
		temp->next = last->next;
		last->next = temp;
	}
	last = temp;
	return;
}

void print(struct node *p)
{
	//Linklist print 
	while(p)
	{
		printf("%d\t",p->val);
		p = p->next;
	}
	printf("\n");
}

void Func_1(struct node *p[2][2])
{
	char ch;
	char list = 1;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("List = p[%d][%d]\n",i,j);
			do{
				insert_node(&p[i][j]);
				printf("Do you want to add node list_%d\n",list++);
				scanf(" %c",&ch);
			}while(ch == 'y');
		}
	}
	printf("In function\n");
	return;
}

int main(void)
{
	struct node *p[2][2] = {NULL}; //2D Array Of Structure Pointer 
	struct node *temp = NULL;
	struct node *prev=NULL;
	p[0][0] = NULL; //List 1 head pointer
	p[0][1] = NULL; //List 2 head pointer
	p[1][0] = NULL; //List 3 head pointer
	p[1][1] = NULL; //List 4 head pointer
	Func_1(p); 
	for(int i=0;i<2;i++)
	{
		//Printing of each single link list
		for(int j=0;j<2;j++)
		{
			temp = p[i][j];
			while(temp)
			{
				printf("%d\t",temp->val);
				temp = temp->next;
			}
			printf("\n");
		}
	}
	printf("\n");
	for(int i=0;i<2;i++)
	{
		//Freeing the list memory allocated in Func.
		for(int j=0;j<2;j++)
		{
			temp = p[i][j];
			while(temp)
			{
				printf("%d\t",temp->val);
				prev = temp;
				temp = temp->next;
				free(prev);
			}
		}
	}
	return 0;
}

