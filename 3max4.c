#include <stdio.h>
int main()
{
int a ,b,c,d;
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b && a>c && a>d )
{
if(b>c && b>d)
if(c>d)
{
	printf("%d",c);
}
}
else
{
	printf("%d",d);
}
 if (c>d && c>b)
{
if(b>c)
{
	printf("%d",b);
}
else 
{
	printf("%d",c);
}
}
else if (d>b && d>a)
if(d>a)
{
	printf("%d",d);
}
else 
{
	printf("%d",a);
}
else if(b>a && b>c && b>d)
{
if(a>c && a>d)
if(c>d)
{
	printf("%d",c);
}
else
{
	printf("%d",d);
}
}
else if (c>a && c>d)
if (d>a)
{
	printf("%d",d);
}
else
{
	printf("%d",a);
}
else if(d>a && d>c )
if (a>c)
{
	printf("%d",a);
}
else 
{
	printf("%d",c);
}

else if (d>a && d>b && d>c)
{
if (a>b && a>c)
if(c>b)
{
	printf("%d",c);
}
else if (b>a && b>c)
if(a>c)
{
	printf("%d",a);
}
else 
{
	printf("%d",c);
}
}
else if (c>a && c>b)
if (b>a)
{
	printf("%d",b);
}
else 
{
	printf("%d",a);
}
else if (c>a && c>b && c>d)
{
if (a>b && a>d)
if(b>d)
{
	printf("%d",b);
}
else 
{
	printf("%d",d);
}
}
else if(b>a && b>d)
{
if(d>a)
{
	printf("%d",d);
}
else
{
	printf("%d",a);
}
}
else if (d>a && d>b)
{
if (a>b)
{
	printf("%d", a);
}
else 
{
	printf("%d",b);
}
}

return 0;
}


