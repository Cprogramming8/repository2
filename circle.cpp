#include<stdio.h>
int main()
{
	int n,i,j=0;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
    
    b[n-1]=a[0];
    for(i=1;i<n;i++)
    {
    	b[j]=a[i];
        j++;
		
	}
	for(j=0;j<n;j++)
	{
			printf("%d",b[j]); 
	}
		

}


