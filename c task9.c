#include<stdio.h>
main()
{
	int i,n,f=1;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("the factorial of the given number %d! is %d",n,f);
	
	
}
