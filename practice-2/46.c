//C code to allocate memory to 3D array dynamically in single line

#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COL 3
#define N2D 2

int main()
{
	int arr[N2D][ROW][COL] ={	 
					{ 
						{1,2,3},
				   		{4,5,6},
				   		{7,8,9}
					},
					{
	    					{10,11,12},
						{13,14,15},
						{16,17,18}
					}
				};
	int (*p)[ROW][COL] = malloc(sizeof(int[N2D][ROW][COL]));//This line is the answer of the above question
	int (*ptr)[ROW][COL] = arr;
	//p = arr; /* This will work but in this case we can't free the memory beacuse we are assinging new address to the pointer which is not in heap section so be careful with this kind of statements before freeing the memory*/
	printf("%p %p\n%d %d\n",(int *)ptr+10,&arr[1][0][1],(*(int *)ptr+10),arr[1][0][1]);
	for(char k = 0;k<N2D;k++)
	{
		for(char i = 0;i< ROW;i++)
		{
			for(char j = 0;j<COL;j++)
			{
				p[k][i][j] = arr[k][i][j];
			}
		}
	}
	for(char k = 0;k<N2D;k++)
	{
		for(char i = 0;i< ROW;i++)
		{
			for(char j = 0;j<COL;j++)
			{
				printf("p[%d][%d][%d] = %d ",k,i,j,p[k][i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	free(p);
	return 0;
}
