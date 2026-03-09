#include<stdio.h>
void main()
{
	int i,j,k=1;
	
	for(i=1;i<=5;i++)
	{	k=i	;
		for(j=1;j<=5;j++)
		{	
			if(j<=i)
			{
				printf("%d ",k);
				
			}
			else
			{
				printf(" ");
			}
		}printf("\n");
	}
}
