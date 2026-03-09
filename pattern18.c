#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			if((j<=i||j>=11-i)&&(j<=11-i||j>=i))
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
