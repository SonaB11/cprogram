#include <stdio.h>
int main()
{
scanf("total marks is %d :total");
scanf("%d %d%d%d%d",physics,chemestry,math,biology ,comp);
obtain marks=physics +chemestry+math+biology+comp;
percent=(obtain marks/total)*100;
if (percent>=90%)
{
	printf("%s","grade A");
}
if(percent>=80)
{
	printf("s","grade B");
}
if (percent>=70)
{
	printf("%s","grade C");
}
if(percent>=60)
{
	printf("%s","grade D");
}
if (percent>=40)
{
	printf("%s",grade E");
}
if (percent<40)
{
	printf("%s",grade F);
}
return 0;
}
