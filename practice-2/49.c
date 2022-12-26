//C code to find number of possible available path in 2D matrix(Without obstacle)
//Movement allowed is right and down from selected index 
//Path which needs to be find is from (0x0) indedx (mxn), where m = Total Number of Row, n = Total Number of column in given matrix
//Example_1
/****************************************************
 * int arr[2][2] = {	
 * 			{1,2},
 * 		 	{3,4}
 * 		   };
 * -> Output : Total number of path is 2 to reach (1x1)4 from (0x0)1;
 *  path 1 = 1(0x0),2(0x1),4(1x1)
 *  path 2 = 1(0x0),3(1x0),4(1x1)
 //Example_2
 ****************************************************
 * int arr[3][3] = {	
		 * 			{1,2,3},
 * 		 	{4,5,6},
 * 		 	{7,8,9}
 *
 * 		   };
 * -> Output : Total number of path is 2 to reach (2x2)6 from (0x0)1;
 *  path 1 = 1(0x0),2(0x1),3(0x2),6(1X2),9(2x2)
 *  path 2 = 1(0x0),2(0x1),5(1x1),6(1X2),9(2x2)
 *  path 3 = 1(0x0),2(0x1),5(1x1),8(2X1),9(2x2)
 *  path 4 = 1(0x0),4(1x0),5(1x1),6(1X2),9(2x2)
 *  path 5 = 1(0x0),4(1x0),5(1x1),8(2X1),9(2x2)
 *  path 6 = 1(0x0),4(1x0),7(2x0),8(2X1),9(2x2)
 ****************************************************/

#include<stdio.h>

#define ROW 5
#define COL 5

void print_arry(int arr[ROW][COL])
{
	/*Printing the array*/
	for(int i = 0;i < ROW;i++)
	{
		for(int j = 0;j < COL;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return;	
}

int Number_Of_Path(int arr[ROW][COL])
{
	/*Find path logic*/
	print_arry(arr);
	for(int i = 0;i < ROW;i++)
	{
		for(int j = 0;j < COL;j++)
		{
			if(i == 0 || j == 0)
			{
				arr[i][j] = 1; //If it is first row or first column write one there
			}
			else
			{
				arr[i][j] = arr[i-1][j] + arr[i][j-1];
			}
		}
	}
	print_arry(arr);
	return arr[ROW-1][COL-1];
}
int main()
{
	/*int arr[ROW][COL] = {	                    //3x3 Matrix
 				{1,2,3},
 		 		{4,5,6},
 		 		{7,8,9}
					};*/
	/*int arr[ROW][COL] = {                     //2x2 Matrix
				{1,2},
				{3,4}
					};*/
	/*int arr[ROW][COL] = {			    //6x6 Matrix	
				{1,0,0,0,0,0},
				{1,1,1,1,1,0},
				{1,1,0,1,1,0},
				{0,1,0,0,0,0},
				{0,1,0,1,1,1},
				{0,1,1,1,0,1},
						};*/
	int arr[ROW][COL] = {			     //5x5 Matrix
				{1,0,0,0,0},
				{1,1,1,1,0},
				{1,1,0,1,0},
				{0,1,0,0,0},
				{0,1,0,1,1}
						};	
	printf("Total number of possible path is = %d\n",Number_Of_Path(arr));
	return 0;
}



