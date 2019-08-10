#include<stdio.h>
int main()
{
int n,m,sum;
scanf("%d%d",&n,&m);
sum=n;
while(n>0)
{
sum=sum+(n*(100-m)/100);
n=(n*(100-m))/100;
}
printf("%d",sum);
 return 0;
 }

