#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    while (1)
    {
    printf("****** 1 - ADDITION ******");
    printf("\n****** 2 - SUBTRACTION ******");
    printf("\n****** 3 - MULTIPLICATION ******");
    printf("\n****** 4 - DIVISION ******");
    printf("\n****** 5 - QUIT ******");

    printf("\n\n\n Choose any one : ");
    scanf("%d", &c);

    printf("Enter 1st value : ");
    scanf("%d", &a);

    printf("Enter 2nd value : ");
    scanf("%d", &b);

    switch (c)
    {
        case 1:
        printf("\n ADDITION = %d", a+b);
        break;

        case 2:
        printf("\n SUBTRACTION = %d", a-b);
        break;

        case 3:
        printf("\n MULTIPLICATION = %d", a*b);
        break;

        case 4:
        printf("\n DIVISION = %d", a/b);
        break;    

        case 5:
        break;
    default:
        printf("\nWRONG KEY PRESS");
        break;
    }
    }
    return 0;
}