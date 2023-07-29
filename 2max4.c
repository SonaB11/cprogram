#include <stdio.h>
int main ()
{
int a,b,c,d;
scanf ("%d%d%d%d",&a,&b ,&c,&d);
if (a>b && a>c && a>d ){
if ( b>c && b>d)
{
	printf("%d",b);
}
else if(c>b && c>d)
{
	printf("%d",c);
}
 else if (d>b && d>c)
{
	printf("%d",d);
}
 else
{
	printf("%d",a);
}
}	
else if (c>a && c>b && c>d)
 {if(d>a && d>b)
{
	printf("%d",d);
}
else if (b>a && b>c)
{
printf("%d", b);
}
else if(a>b && a>d)
{
	printf("%d",a);
}
else 
{
	printf("%d",c);
}
}
else if (b>c && a>b & b>a)
{if (a>c && a>d)
{
	printf("%d",a);
}
else if (c>d && c>a)
{
printf("%d",c);
}
else if (d>a && d>c)
{
	printf("%d",d);
}
else
{
	printf("%d",b);
}
}
else if (d>a && d>b && d>c)
{
if(a>c && a>b)
{
	printf("%d", a);
}
else if (b>c && b>a)
{
	printf("%d",b);
}
else if (c>b && c>a)
{
	printf("%d",c);
}
else
{
	printf("%d",d);
}
}
return 0;
}
