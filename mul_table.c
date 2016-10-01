#include<stdio.h>
#include<conio.h>
int main()
{
int num,i,answer,range;
printf("\n enter the no:");
scanf("%d",&num);
printf("\n enter the range:");
scanf("%d",&range);
if((num>0)&&(range>0))
{
for(i=1;i<=range;i++)
{
answer=num*i;
printf("\n %d X %d =%d",num,i,answer);
}}
else
printf("invalid input");
getch();
return 0;
}
