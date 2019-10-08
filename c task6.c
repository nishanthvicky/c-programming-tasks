#include<stdio.h>
main()
{
	int a,n,r,b=0;
	printf("enter the number:\n");
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
	r=n%10;
	b=b+r*r*r;
	n=n/10;
}
if(b==a)
printf("\n%d is the armstrong number",a);
else
printf("\n%d is not armstrong number",a);
}

