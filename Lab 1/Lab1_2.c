#include<stdio.h>
#include<Math.h>
int main()
{
    int i,c=0;
for(i=11;i<=9999;i+=11)
{
if((pow(i,0.5)*pow(i,0.5))==i)
{++c;
}
if(i%10==9)
i+=990;}
printf("%d",c);}
