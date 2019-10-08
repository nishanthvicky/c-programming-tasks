#include<stdio.h>
#include<string.h>
void main()
{
	char s1[20],s2[20];
	printf("Enter the first name:");
	scanf("%s",&s1);
	printf("enter the last name:");
	scanf("%s",&s2);
	strcat(s1,s2);
	printf("the name is %s",s1);
}
