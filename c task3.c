#include<stdio.h>
main()
{
	float a,b,c,sum,avg;
	printf("ENTER THE MARKS OF 3 SUBJECTS:\n");
	scanf("%f%f%f",&a,&b,&c);
	sum=a+b+c;
	avg=sum/3;
	printf ("THE TOTAL SUM IS %f\nTHE AVERAGE IS %f\n",sum,avg);
}
