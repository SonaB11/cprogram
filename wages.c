#include <stdio.h>
int main ()
{
int age,gender,days;
scanf("%d %d",&age, &days);
if (age>=18 && age<30)
{
	printf("%s %s","m=700","f=750");
}
 else if (age>=30 && age<=40)
{
	printf("%s %s","m=800","f=850");
}
else
{
	printf("%s","enter appropriate age");
}
return 0;
}


