#include<stdio.h>
main()
{
	int choice=0;
	float temp,c;
	printf("The choices are\n1.celsius to fahrenheit\n2.fahrenheit to celsius\n3.exit\nENTER THE CHOICE\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		printf("enter the temperature in terms of celsius:\n");
		scanf("%f",&temp);
		c=temp*9/5+32;
		printf("the temperature in terms of fahrenheit is %f",c);
		break;
		case 2:
		printf("enter the temperature in terms of fahrenheit:\n");
		scanf("%f",&temp);
		c=(temp-32);
		c=c*5/9;
		printf("the temperature in terms of celsius is %f",c);
		break;
		default:
			exit(0);
	}
}
