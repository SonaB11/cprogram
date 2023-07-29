#include <stdio.h>
int main()
{
int A1,A2,A3;
scanf("%d %d %d ",&A1,&A2,&A3);
A1+A2+A3==180;
if (A1==90 && A2<90 && A3<90)
{
	printf("%s","right angle triangle");
}
 else if (A1>90 && A2<90 && A3<90)
{
	printf("%s" ,"obtuse a&ngle triangle");
}
else if(A1==60 && A2==60 && A3==60)
{
	printf("%s","acute angle triangle");
	
}
else 
{
	printf("%s","not a teiangle");
}
return 0 ;
}
