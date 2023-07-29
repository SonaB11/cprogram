#include <stdio.h>
int main(){
int bill,unit ;
scanf("%d",&bill);
if (bill<=50)
{
	printf("%f",0.5*bill);
}
else if(bill>50 && bill<150)
{
	printf("%f", 0.75*bill);
}
else if(bill>150 && bill<250)
{
	printf("%f",1.20*bill);
}
else
{
	printf("%f",1.50*bill);
}
return 0;
}
