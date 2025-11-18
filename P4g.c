//(4g)program to calculate the sum of first n natural number while loop
#include <stdio.h>
int main()
{
    int n, sum = 0, i = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum +i; 
        i++;     
    }

    printf("Sum of first %d natural numbers is: %d\n", n, sum);

    return 0;
}

output
Enter the value of n: 7
Sum of first 7 natural numbers is: 28

