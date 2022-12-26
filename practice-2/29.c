//Code to find Closest mean in array
//----------------------------------------------------
//Example 
//	Input 			Expected Output
//  {50,24,10,16}			24
//  {55,35,18,12,40}			35
//  {20,42,68,60,15,35}			42
//  {10,20,30}				20
//----------------------------------------------------

#include<stdio.h>

int closest_mean(int *arr,int len)
{
	int a[len];
	int avg=0,i=0,low=0;
	for(i=0;i<len;i++)
		avg = avg + arr[i];
	avg = avg / len;
	for(i=0;i<len;i++)
	{
		a[i] = arr[i] - avg;
		if(a[i] < 0)
			a[i] = -a[i];
	}
	low=a[0];
	int index=0,count=0;
	for(i=0,index=0;i<len;i++)
	{
		if(arr[i] == avg)
			return arr[i];
		else if(a[i]<low)
		{
			low = a[i];
			index++;
			if(low == a[i]) 
				count++;
		}
	}
	if(count == 1)
	{
		for(i=0;i<len;i++)
			if(low == a[i])
				break;
		return arr[i];
	}
	printf("%d %d\n",low,index);
	return arr[index-1];
}

int main()
{
	int a[]={1,11,21,31},len=0,num=0;
	len = sizeof(a)/sizeof(a[0]);
	num = closest_mean(a,len);
	printf("Closest Mean=%d\n",num);
	return 0;
}
