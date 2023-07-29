# include <stdio.h>
int main()
{
int cost ,tax;
scanf("%d",cost);
if (cost>100000)
{
	printf("%d", (15*cost)/100);
}
if(cost>50000 && cost<=100000)
{
	printf("%d", 10*cost)/100);
}
if (cost<=50000)
{
	printf("%d",5*cost/100);
}
return 0;
}
