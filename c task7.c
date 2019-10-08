#include<stdio.h>
main()
{
	char s1[100],s2[100];
	printf("Enter the word:\n");
	gets(s1);
	strcpy(s2,s1);
	strrev(s1);
	if(strcmp(s2,s1)==0)
	printf("\n%s is the palindrome word",s2);
	else
	printf("\n%s is not a palindrome word",s2);	
}
