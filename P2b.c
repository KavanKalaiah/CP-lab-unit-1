//(2b) c programm for input and display various data type
#include <stdio.h>
int main()
{
    int i;
    float f;
    double d;
    char c;

    
    printf("Enter an integer: ");
    scanf("%d", &i);

    printf("Enter a float value: ");
    scanf("%f", &f);

    printf("Enter a double value: ");
    scanf("%lf", &d);

    printf("Enter a character: ");
    scanf(" %c", &c); 


   
    printf("\n--- Displaying Entered Values ---\n");
    printf("Integer: %d\n", i);
    printf("Float: %.2f\n", f);
    printf("Double: %.4lf\n", d);
    printf("Character: %c\n", c);

return 0;
}


output
Enter an integer: 23
Enter a float value: 34.5
Enter a double value: 2343
Enter a character: kavan

--- Displaying Entered Values ---
Integer: 23
Float: 34.50
Double: 2343.0000
Character: k
