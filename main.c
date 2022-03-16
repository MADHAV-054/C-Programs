#include<stdio.h>
int main()
{
int a,b,c;
float sum,avg;
printf("enter a value for a : ");
scanf("%d",&a);
printf("enter a value for b : ");
scanf("%d",&b);
printf("enter a value for c : ");
scanf("%d",&c);
sum=a+b+c;
avg=sum/3;
printf("average of 3 subjects : %f",avg);
return(0);  
}