#include<stdio.h>
main()
{
	int n;
	printf("pyramid:");
	scanf("%d",&n);
	while(n!=0)
	{
		printf("%d\n",n);
		n=n/10;
	}
}
