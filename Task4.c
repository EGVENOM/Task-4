#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, m, x, i, j, array[50][50];

	printf("Enter the number of rows: \n");
	scanf("%d",&n);
	
	printf("Enter the number of columns: \n");
	scanf("%d",&m);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			array[i][j]=rand()%10;
				printf("%2d",array[i][j]);
				
		}
		printf("\n");
	}
	
	printf("Enter the number x that you want to search for : ");
	scanf("%d",&x);
	
	for(i = 0; i<n; ++i)
	{
		for(j = 0; j < m; ++j)
		{
			if(x == array[i][j])
			{
				printf("The number %d is found in the array",x);
					
			}
			else if(x != array[i][j])
			{
				printf("The number %d is not found in the array");
			}
		}
	return 0;	
	}
	
	
	
	
}
	
	
	

