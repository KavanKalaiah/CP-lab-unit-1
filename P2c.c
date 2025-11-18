//(2c) c program to print size of each data type
#include <stdio.h>
int main() 
{
    printf("Size of int: %zu\n", sizeof(int));
    printf("Size of float: %zu\n", sizeof(float));
    printf("Size of double: %zu\n", sizeof(double));
    printf("Size of char: %zu\n", sizeof(char));
     
return 0;
}

output
Size of int: 4
Size of float: 4
Size of double: 8
Size of char: 1
