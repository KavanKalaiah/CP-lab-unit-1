//(4e) c program calulator using switch case
#include<stdio.h>
int main()
{
    int choice;
    printf("enter your choice b/w 1-3");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("user entered choice 1");
        break;
        case 2:
        printf("user entered choice 2");
        break;
        case 3:
        printf("user entered choice 3");
        break;
        default:
        printf("invalid choice");
        
    }
    
    return 0;
}

output

enter your choice b/w 1-3:2
user entered choice 2
