#include<stdio.h>
void main()
{
	int i,j; char k='A';
	for(i-1;i<=5;i++)
	{	k='A';
		for(j=1;j<=5;j++)
		{
			if(j<=i)
			printf("%c",k++);
			else 
			printf(" ");
		}
		printf("\n");
	}
}
