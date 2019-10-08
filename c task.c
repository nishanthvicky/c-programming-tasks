#include<stdio.h>
main()
{
	char name[100],n[11];
	int age;
	printf("enter the name:");
	scanf("%s",&name);
	printf("the phone number is:");
	scanf("%s",&n);
	printf("\nenter the age:");
	scanf("%d",&age);
	printf("the name is %s",name);
	printf("\nthe age is %d",age);
	printf("\nthe phone number is %s",n);
}
