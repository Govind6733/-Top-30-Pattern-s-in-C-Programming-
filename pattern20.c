#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(j==i||j==6-i||j==4+i||j==10-i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}printf("\n");
	}
}
