#include <stdio.h>

int add();

int main()
{
    add();
    return 0;
    
}

int add()
{
    int a,b,c;
    printf("Enter your 1st number :");
    scanf("%d", &a);
   
    printf("Enter your  2nd number :");
    scanf("%d", &b);

    c=a+b;

    printf("THE ADDITION IS : %d", c);
    return 0;
    
}