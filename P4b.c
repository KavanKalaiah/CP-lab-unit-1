//(4b) c program for checking voting elegibility
#include<stdio.h>
void main()
{
    int age;
    printf("enter age");
    scanf("%d",&age);
    if (age >= 18)
        printf("he/she is elegibl to vote");
    else
    printf("he/she is not elegible to vote");
    
}

output
enter age23
he/she is elegibl to vote