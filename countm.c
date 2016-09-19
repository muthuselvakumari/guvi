#include<stdio.h>

void main()   
{    
char str1[50];    
int i1, count1=1;  
   
gets(str1);    
for (i1=0; str1[i1]!='\0'; i1++)   
        {
        if(str1[i1]==' ')    
                {
                count1++;
                }
        }
printf("%i1\n",count1);    
}

