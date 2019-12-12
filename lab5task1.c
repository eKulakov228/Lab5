#include <stdio.h>
#include <locale.h>

	int main()
{
	setlocale(LC_ALL,"Rus");
	int a[100][100],i,j,m,n,d,l,z,h,t;
	printf("Количество строк:",m);
	scanf("%d",&m);
    printf("Количетсво столбцов:",n);
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]=", i+1, j+1); 
		    scanf("%d",&a[i][j]);
		}
	}
    for(z=0;z<i;z++)
    {
        int h[z];
		h[z]=1;
    	for(d=0;d<j;d++)
    	{
    		t=0;
    		for(l=0;l<j;l++)
    		{
    			if(a[z][d]==a[z][l])
    			t=t+1;
			}
    		if(t>h[z])
    		h[z]=t;
		}
	}
	for(l=1;l<=i;l++)
	{
		for(z=0;z<i;z++)
		{
			int h[z];
			if(h[z]==l)
			{
				printf("\n");
				for(d=0;d<j;d++)
				{
					printf("%3d",a[z][d]);
				}
			}
		}	
	}
	int index=0;
	int k=0;
	for(j=0;j<n;j++)
	{
		for(i=0;i<m;i++)
		{
			if(a[i][j]>0)k++;
			else
			{
				k=0;
				break;
			}
		}
	    if(k==m)
	    {
	    	index=j+1;
	    	break;
		}
	}
	printf("\nНомер столбца без отрицательных элементов: %d\n",index);
	return 0;
}

