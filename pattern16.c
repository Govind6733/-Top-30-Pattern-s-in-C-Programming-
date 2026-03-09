#include<stdio.h>
void main()
{
	int i,j,k=1;
	for(i=0;i<5;i++)
	{	k=1;
		for(j=0;j<5;j++)
		{	
			if(j<=i)
			{
				printf("%d",k);
				k=k*(i-j)/(j+1);
				
			}
			else 
			printf(" ");
		}
		printf("\n");
	}
}
