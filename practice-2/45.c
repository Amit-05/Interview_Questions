//Program to use callback function using function pointer
//Here in the case of bit field structure varibale will have size of 1 byte in case of all character data type for next 8 bits
//In the case of structure variable will have size of 4 byte int in the case of all integer data type

#include<stdio.h>

int func_3(int a)
{
	printf("func_3 = %d\n",a);
	return a;
}

void func_2(void)
{
	printf("Func_2\n");
	return;
}

int func(void (*p)(void))
{
	struct student
	{
		char ch : 1;
		char cj : 2;
		char cj3 : 3;
		char ch4 : 1;
		int ch5 : 26;
		char ch6 : 1;
		//char ch7 : 1;
	}var;
	printf("Size = %ld\n",sizeof(var));
	printf("Hello World\n");
	p();
	return 2;
}

int (*func_1(int (*p)(void (*)(void)),void (*ptr)(void)))(int)
{
	int (*st)(int);
	printf("Func_1\n");
	printf("%d\n",p(ptr));
	st = func_3;
	return st;
}

int main(void)
{
	int (*p)(int);
	p = func_1(func,func_2);
	printf("%d\n",p(7));
	return 0;
}
