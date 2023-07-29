#include <stdio.h>
int main()
{
int day;
scanf("%d",&day);
if (day<=5)
{
	printf("%s","2*day");
}
else if(days>5 && days<=10)
{
	printf("%s","3*day");
}
else if (days>10 && days<=15)
{
	printf("%s", "4*days");
}
else if (days>15)
{
	printf("%s","5*day");
}
return 0;
}
