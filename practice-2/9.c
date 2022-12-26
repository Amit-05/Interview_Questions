//Concept Of Function Pointer
#include<stdio.h>

int addition(int *,int *);
void display();
int main()
{
	int a,b,c;
	printf("Enter the values: \n");
	scanf("%d%d",&a,&b);
	int (*add)(int *,int *);
	void (*foo)();
	foo = display;
	add = addition;
	display();
	(*foo)();
	printf("%d + %d = %d\n",a,b,a+b);
	c = (*add)(&a,&b);
	printf("%d %d %d\n",c,a,b);
	return 0;
}

void display()
{
	printf("In Display function\n");
}

int addition(int *n1,int *n2)
{
	return (--*n1 + --*n2);
}
