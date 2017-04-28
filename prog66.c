#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,count,min,max;
print("enter the min range");
scanf("%d",&min);
printf("enter the max range");
scanf("%d",&max);
for(num=min;num<=max;num++0)
{
count=0;
for(i=2;i<=num/2;i++)
{
if(num%i==0)
{
count++;
break;
}
}
if(count==0 && num!=1)
{
printf("%d",num);
}
}
getch();
}
