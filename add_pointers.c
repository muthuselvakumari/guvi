#include<stdio.h>
void main()
{
int fst,scnd,*p,*q,sum;
scanf("%d%d",&fst,&scnd);
p=&fst;
q=&scnd;
sum=*p+*q;
printf("\n %d",sum);
}
