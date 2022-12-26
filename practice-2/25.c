//Check for the junction in single link list or find the node where two parallel list are meeting

#include<stdio.h> 
#include<stdlib.h>

typedef struct student 
{
	int roll;
	struct student *link;
}st;

int list_1=0,list_2=0;

void add_end(st **);
int print(st *);
void add_begin(st **,st *);
void find_junction(st *,st *);

int main()
{
	st *hptr = 0; // 1st link head pointer
	st *hptr1 = 0; // 2nd link head pointer
	char ch;
	while(1)
	{
		printf("Choose an option\r\n1.Create 1st link\r\n2.display link\r\n3.create 2nd list\r\n4.display 2nd list\r\n5.To find junction is present or not in list\r\n6.stop\r\n");
		scanf(" %c",&ch);
		switch(ch)
		{
			case '1': add_end(&hptr);
				break;
			case '2':list_1 = print(hptr);
				break;
			case '3': add_begin(&hptr1,hptr);
				break;
			case '4':list_2 = print(hptr1);
				break;
			case '5': find_junction(hptr,hptr1);
				break;
			case '6': return 0;
		}	
	}	
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
		temp->link = *ptr;
		*ptr = temp;
	}
	else
	{
		temp->link = last->link;
		last->link = temp;	
	}
	last = temp;
}
void add_begin(st **ptr,st *ptr1)
{
	static c = 1;
	st *temp,*junc;
	if(c == 1)
	{
		int count = 0;
		c = 0;
		while(count < 4)
		{
		//At fourth node of first link i'm attaching 2nd link
			count++;
			ptr1 = ptr1->link;
		}
		junc = ptr1;
		*ptr = junc;
	}
	temp = (st *)malloc(sizeof(st));
	printf("Enter the roll number\n");
	scanf("%d",&temp->roll);
	temp->link = *ptr;
	*ptr = temp;
}
void find_junction(st *ptr,st *ptr1)
{
	int result = 0;
	printf("Entered\n");
	st *temp,*temp_1; 
	temp = ptr;
	temp_1 = ptr1;
	for(temp = ptr;temp != 0;temp=temp->link)
	{
		for(temp_1 = ptr1;temp_1 != 0;temp_1 = temp_1->link)
		{
			if(temp == temp_1)
			{
				printf("Both are meeting at %p\n",temp);
				printf("%d %d\n",temp->roll,temp_1->roll);
				return;
			}
		}
	}
/*	printf("%d %d\n",list_1,list_2);
 *	list_1 = print(ptr);
 *	list_2 = print(ptr1);
	if(list_1 > list_2)
	{
		result = list_1 - list_2;
		while(result > 0)
		{
			result--;
			temp = temp->link;
		}
	}
	else
	{
		result = list_2 - list_1;
		while(result > 0)
		{
			result--;
			temp_1 = temp_1->link;
		}
	}
	while(temp)
	{
		if(temp == temp_1)
		{
			printf("Given two links are merging at %p\n",temp);
			break;
		}
		temp = temp->link;
		temp_1 = temp_1->link;
	}
	printf("%d %d\n",temp->roll,temp_1->roll);*/
}
int print(st *ptr)
{
	int count = 0;
	while(ptr)
	{
		count++;
		printf("%d ",ptr->roll);
		ptr = ptr->link;
	}
	printf("\n");
	return count;
}
