#include<stdio.h>
struct book{
	char bname[100];
	char author[100];
	char genre[50];
};
book();
main()
{
book();	
}
book()
{
struct book b1;
	printf("enter the book name:\n");
	scanf("%s",b1.bname);
	printf("enter the author:\n");
	scanf("%s",b1.author);
	printf("enter the genre:\n");
	scanf("%s",b1.genre);
	printf("the book name:%s\n",b1.bname);
	printf("the name of the author:%s\n",b1.author);
	printf("the genre of the book:%s\n",b1.genre);
}
