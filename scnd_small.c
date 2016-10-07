#include<stdio.h>
void main()
{
int a[50],size,i,j,small,scnd;
j=0;
scanf("%d",&size); //size of array
scanf("%d",&a[i]); //elements
small=a[0];
for(i=1;i<size;i++)
{
if(small>a[i])
{
small=a[i];
j=i;
}}
scnd=a[size-j-i];
for(i=1;i<size;i++)
{
if((scnd>a[i]) && (j!=i))
{
scnd=a[i];
}
printf("\n the second smallest is:%d",scnd);
}
}
