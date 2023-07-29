#include <stdio.h>
int main ()
{
int year;
scanf("%d",&year);
if (year%4==0)
{
	printf("%s","leap year");
}
else if (year%100!=0)
{
	printf("%s","leap year");
}
else if (year%400==0)
{
	printf("%s","leap year");
}
else
{
	printf("%s","normal year");
}
return 0;
}
