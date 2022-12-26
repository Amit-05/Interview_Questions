//Code to read two file and write their data to third file
#include<stdio.h>
#include<error.h>
#include<time.h>
int main(void)
{
	char ch;
	FILE *fd1,*fd2,*fd3;
	fd1 = fopen("data","r");
	fd2 = fopen("data1","r");
	fd3 = fopen("result","w+");
	if(fd1 < 0 || fd2 < 0 || fd3 < 0)
	{
		perror("OPEN");
		return 0;
	}
	while((ch = fgetc(fd1)) != EOF)
	{
		fputc(ch,fd3);
		sleep(1);
		ch = fgetc(fd2);
		fputc(ch,fd3);
		sleep(1);
	}
	fclose(fd1);
	fclose(fd2);
	fclose(fd3);
	return 0;
}
