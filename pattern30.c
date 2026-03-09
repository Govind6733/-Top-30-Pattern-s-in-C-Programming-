#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=9;j++)
		{
			if((j>=i-2&&j<=12-i&&i>=3)||(j>=3-i&&j<=i+2&&i<=2)||(j>=8-i&&j<=7+i&&i<=2))
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
