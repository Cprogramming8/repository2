#include<stdio.h>
int main()
{
	int n,x=0;
	printf("enter n value");
    scanf("%d",&n);
    while(n!=1)
    {
    	if(n%5==0)
    	{
    		n/=5;
    		
		}
		else if(n%3==0)
		{
			n=n/3;
		}
		else if(n%2==0)
		{
			n=n/2;
		}
		else
		{
			
		  printf("it is not an ugly number");
		  x=1;
		  break;
		}
  }
		if(x==0)
		{
			printf("ugly number");
		}
		
	}


