//(3b)c program for swapping of 2 numbers

#include<stdio.h>
void main()
{
    int a=6,b=7;
    int temp;
    printf("before swapping\n");
    printf("a=%d \t b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping\n");
    printf("a=%d \t b=%d",a,b);
}

output

before swapping
a=6 b=7
after swapping
a=7 b=6
