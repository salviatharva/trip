#include<stdio.h>
int main()
{
int n,i;
while(scanf("%d",&n)!=EOF)
{
if(n==0)
   break;
float a[n],total=0.0f,money=0.0f;
for(i=0;i<n;i++)
{
scanf("%f",&a[i]);
total=total+a[i];
}
float avg=total/(float)n;
for(i=0;i<n;i++)
{
if(a[i]<avg)
{
 money=money+(avg-a[i]);
}
}
printf("$%.2f\n",money);
}
return 0;
}
