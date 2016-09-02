
#include<stdio.h>
#include<conio.h>
int main()
{
int num,r_n=0,j;
printf("Enter any number:");
scanf("%d",&num);
while(num>=1)
{
j=num%10;
r_n=r_n*10+j;
num=num/10;
}
printf("after reverse:%d",r_n);
return 0;
}
