//(1a)c program for receiving an input from the user at the runtime and printing it

#include<stdio.h>
int main()
{
    float pi= 3.14;
    float  area,r;
    printf("enter the radius of the circle=");
    scanf("%f",&r);
    area= pi*r*r;
    printf("area of the circle is=%f\n",area);
    return 0;
    
}

output
enter the radius of the circle=4
area of the circle is=50.240002

