//swapping of two numbers without temporary variable

include<stdio.h>
int main()
{
int a,b;
printf("enter a and b");
scanf("%d %d",&a,&b);
a=a-b;
b=a+b;
a=b-a;
printf("new numbers are a and b %d %d",a,b);
return 0;
}
