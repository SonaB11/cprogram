#include <stdio.h>
int main()
{
int  n ,p;
int i=2,sum=0;
scanf("%d",&n);
while(i<n)
{
if(i%2==0)
{

sum=sum+i;
i=i+2;
}
else
{
i++;
}
printf("%d\n",sum);

}
return 0;
}

