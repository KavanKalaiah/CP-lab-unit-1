//(3a)c program to perform arithmetic operatin
#include <stdio.h>

int main()
{
    int a=10,b=6,sum,diff,mult,div,mod;
    sum=a+b;
    printf("sum= %d\n",sum);
    diff=a-b;
    printf("diff= %d\n",diff);
    mult=a*b;
    printf("mult= %d\n",mult);
    div=a/b;
    printf("div= %d\n",div);
    mod=a%b;
    printf("mod= %d\n",mod);
    return 0;

}

output
sum= 16
diff= 4
mult= 60
div= 1
mod= 4
