//C code to sort single list according to data available in the node
#include<stdio.h>
#include<stdlib.h>

typedef struct member{
	int num;
	struct member *link;
}member;

void add_begin(struct member **ptr)
{
	/*Add begin node in single link list*/
	struct member *temp;
	if(temp = (struct member *)malloc(sizeof(member))){
		printf("Enter the value\n");
		scanf("%d\n",&temp->num);

		temp->link = *ptr;
		*ptr = temp;
	}
	return;
}

void sort_list(member **ptr)
{
	/*Sorting Method*/
	member *temp,*prv;
	int num;
	for(prv = *ptr;prv->link != NULL;prv=prv->link)
	{
		for(temp = *ptr;temp->link != NULL;temp=temp->link)
		{
			if((temp->num) > (temp->link->num))
			{
				num = temp->num;
				temp->num = temp->link->num;
				temp->link->num = num;
			}
		}
	}
}

void print(struct member *ptr)
{
	/*Printing the the list*/
	while(ptr)
	{
		printf("%d\t",ptr->num);
		ptr = ptr->link;
	}
	printf("\n");
	return;
}

int main(void)
{
	/*Main Function Code*/
	member *hptr = NULL;
	char ch = 0;
	do{
		add_begin(&hptr);//Create Single Link List
		printf("Enter your choice to add node or not(y/n)?\n");
		scanf(" %c",&ch);
	}while(ch == 'y');//User can add as much he/she wants add node to the list by pressing 'y'
	print(hptr);
	sort_list(&hptr); // Sorting a single link list in ascending order
	print(hptr);
	return 0;
}


