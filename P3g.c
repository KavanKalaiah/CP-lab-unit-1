//(3g) comma operator
#include<stdio.h>
int main()
{
    int a,b,c;
    c=(a=5,b=0,a+b);
    printf("c=%d",c);
    return 0;
    
}

output
c=5

