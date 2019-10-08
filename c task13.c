#include<stdio.h>
main()
{
	int a[50],i,n,large,small;
	printf("enter the number of elements in an array:\n");
	scanf("%d",&n);
	printf("enter the elements in an array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	large=small=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>large)
		large=a[i];
		if(a[i]<small)33
		small=a[i];
	}
	printf("the largest number is %d",large);
	printf("the smallest number is %d",small);
}
