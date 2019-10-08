#include<stdio.h>
main()
{
	int i,n,r;
	printf("Enter the multiplier:\n");
	scanf("%d",&n);
	printf("MULTIPLICATION TABLE OF THE INTEGER %d",n);
	for(i=1;i<=10;i++)
	{
		r=n*i;
		printf("\n%d*%d=%d",n,i,r);
	}
}
