#include <stdio.h>
int main()
{
int  a,b,c,angle;
scanf("%d %d %d ", &a,&b, &c);
if (a==b && b==c && c==a)
{
	printf("%s","equilateral triangle");
}
else if (a==b && b==c && c!=a)
{
	printf("%s","isoscales triangle");
}
else if(a!=b && b!=c && c!=a)
{
	printf("%s","scalen triangle ");
}
else if (angle==90)
{
	printf("%s","right angle triangle");
}
else
{
	printf("%s","not right angle triangle");
}
return 0 ;
}
