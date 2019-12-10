#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main()
{
	setlocale(LC_ALL,"Rus");
	int a[100][100],i,j,m,n,x;
	printf("Number of str :",m);
	scanf("%d",&m);
    printf("Number of col :",n);
	scanf("%d",&n);
	printf("Enter matrix : \n");
	for( i=0; i<n; i++)
	{
		for(j=0;j<m;j++)
		{

		    scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for( j=1; j<m; j++)
		   if( a[i][j] < a[i][j-1] )
		   break;
		if(j==m)
		{
		  printf("String %d\n",i+1);
		  for( j=0; j<(m/2); j++)
		  {
			x=a[i][j];
			a[i][j]=a[i][m-1-j];
			a[i][m-1-j]=x;
		  }
		  break;
	    }
    }   
	printf("Matrix: \n");
	for(i=0;i<n;i++)
	{
		for( j=0; j<m; j++)
		printf("%d ",a[i][j]);
		printf("\n");
		
	}
	
	
	return 0;
}
