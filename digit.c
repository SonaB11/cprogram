#include <stdio.h>
int main()
{
int n;
scanf("%d",&n );
if (n<10)
{
	printf("%s","one digit no");
}
if(n>9 &&  n<100)
{
	printf("%s","two digit no");
}
if(n>99 && n<1000)
{
	printf("%s","three digit no");
}
else 
{
	printf("%s","more than three digit");
}
return 0;
}
