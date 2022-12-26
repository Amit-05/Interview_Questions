//Code to delete node from circular linklist according given data
#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int roll;
	struct student *link;
}st;
void add_end(st **ptr);
void print(st *ptr);
void delete(st **ptr);
int main()
{
	char ch;
	st *hptr = 0;
	do{
		add_end(&hptr);
		printf("Do you want to add node(Y/n)\n");
		scanf(" %c",&ch);
	}while(ch == 'Y' || ch == 'y');
	print(hptr);
	delete(&hptr);	
	print(hptr);
	return 0;
}

void add_end(st **ptr)
{
/*If you want to use static *last pointer then uncomment two last pointer lines*/
	st *temp;
//	static st *last;
	temp = (st *)malloc(sizeof(st));
	printf("Enter the roll number\n");
	scanf("%d",&temp->roll);

	if(*ptr == NULL)
	{
		/* Adding node at begin */
		temp->link = temp;
		*ptr = temp;
	//	last = temp;
	}
	else
	{
		/* Adding Node at last */
		st *last = *ptr;
		while(last->link != *ptr)
			last = last->link;
		temp->link = *ptr;
		last->link = temp;
	//	last = temp;
	}
}
void delete(st **ptr)
{
	int num;
	printf("Enter the roll Number which you want to delete\n");
	scanf("%d",&num);
	st *temp=*ptr,*last,*pre=*ptr;
	while(temp)
	{
		if(temp->roll == num)
		{
			if(temp == *ptr) //if it is first node then
			{
				while(pre->link != temp) //Going upto last node to update last node link address bcz it has to point first node 
					pre = pre->link;
				*ptr = temp->link;
				pre->link = *ptr; //assignning address of first node to last node bcz this is circular link list
				free(temp);
				temp = NULL;
				return;
			}
			else
			{
				last->link = temp->link;
				free(temp);
				temp = NULL;
				return;	
			}
		}
		else
		{
			if(temp->link == *ptr)
				break;
			else
			{
				last = temp;
				temp = temp->link;
			}
		}
	}
}
void print(st *ptr)
{
	st *temp = ptr;
	while(temp)
	{
		printf("%d\n",temp->roll);
		temp = temp->link;
		if(temp == ptr)
			break;
	}
}
