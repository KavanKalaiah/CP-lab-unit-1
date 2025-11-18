//(3f)conditional operator
#include<stdio.h>
int main()
{
    int a=10,b=5;
    printf("(a>b)?a:b %d\n",(a>b)?a:b);
    a=6,b=8;
    printf("(a>b)?a:b %d\n",(a>b)?a:b);
    return 0;
}

output
(a>b)?a:b 10
(a>b)?a:b 8
