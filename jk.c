#include<stdio.h>
int main()
{

int a,b,z;
char g;
printf("enter first num:");
scanf("%d",&a);
printf("enter second num:");
scanf("%d",&b);

printf("enter operator:");
scanf(" %c",&g);

switch(g)
{
case '+':
z=a+b;
printf("sum %d+%d=%d",a,b,z);
break;
case '-':
z=a-b;
printf("difference %d-%d=%d",a,b,z);
break;
case '*':
z=a*b;
printf("product %d*%d=%d",a,b,z);
break;
case '/':

if(b!=0)
{
    z=a/b;
printf("Q %d/%d=%d",a,b,z);
}
else
{
    printf("can't devide by using 0");
}
break;

default:
printf("invalid");
break;
}
return 0;
}
