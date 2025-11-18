//(2a)c program to display different data type
#include <stdio.h>
int main()
{
    int a = 10;              
    float b = 3.14;          
    double c = 123.456789;
    char d = 'A';            
    char name[20] = "kavan"; 

    printf("Integer value: %d\n", a);
    printf("Float value: %.2f\n", b);
    printf("Double value: %.6lf\n", c);
    printf("Character value: %c\n", d);
    printf("String value: %s\n", name);

return 0;
}

output
Integer value: 10
Float value: 3.14
Double value: 123.456789
Character value: A
String value: kavan
