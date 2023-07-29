#include <stdio.h>
int main(){
int a ,b ,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if (a>b && a>c && b>c)
{
	printf("%d",b);
}
else if (b>a && b>c && c>a)
{
	printf("%d",c);
	}

else if (c>b && c>a && a>b)
{
	printf("%d",a);
}
return 0;
}

