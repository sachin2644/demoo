#include<stdio.h>
int main() 
{
     int a=10,b=20;
     printf("before swapping\na=%d\nb=%d\n",a,b);
     a=a+b;
     b=a-b;
     a=a-b;
     printf("after swapping\na=%d\nb=%d\n",a,b);
}
