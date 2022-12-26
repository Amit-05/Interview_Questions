//Memory layout of c
#include<stdio.h>

//int i; //Stored in uninitialized area(BSS)
int i = 7;//Stored in initialized area
const char str[] = "Hello World"; //stored in initialized read only memory
int main()
{
//	static int data; // stored in uninitialized area(BSS)
	static int data = 10; //Stored in initialized area 
	return 0;
}
