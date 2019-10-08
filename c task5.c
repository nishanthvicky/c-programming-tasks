#include<stdio.h>
main()
{
	int n,r=0;
	printf("enter the number to be reversed");
	scanf("%d",&n);
	while(n!=0)
	{
	r=r*10;
	r=r+n%10;
	n=n/10;
}
printf("the reversed number is %d",r);
}
