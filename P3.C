#include<stdio.h>
void main()
{
int a[10],i,n,m,c=0;
printf("enter the size of an array:");scanf("d",&n);
printf("enter the elements of the array");for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}
printf("enter the number to be search:");
scanf("%d",&m);
for(i=0;i<=n-1;i++)
{
if(a[i]==m)
{
c=1;
break;
}
}
if(c==0)
printf("the number is not in the list");
else
printf("the number is found at %d",i);
return 0;
}