#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(i==1||j==i||j==10-i||i==9)
			printf("*");
			else 
			printf(" ");
		}
		printf("\n");
	}
}
