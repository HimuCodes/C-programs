#include <stdio.h>
#include <math.h>

int add();
int sub();
int multiply();
int division();

int main()
{   
    int d;
    printf("****** 1 - ADDITION ******");
    printf("\n****** 2 - SUBTRACTION ******");
    printf("\n****** 3 - MULTIPLICATION ******");
    printf("\n****** 4 - DIVISION ******");
    printf("\n****** 5 - QUIT ******");

    printf("\n\n\n Choose any one : ");
    scanf("%d", &d);

    switch (d)
    {
        case 1:
        int add();
        break;

        case 2:
        int sub();
        break;

        case 3:
        int multiply();
        break;

        case 4:
        int division();
        break;
    default:
        printf("WRONG KEY PRESS");
        break;
    }

}

int add()
{
    int a,b,c;
    printf("****** 1 - ADDITION ******");

    printf("Enter 1st value : ");
    scanf("%d", &a);

    printf("Enter 2nd value : ");
    scanf("%d", &b);

     c=a+b;

    printf("THE ADDITION IS : %d", c);
    return 0;
    
}

int sub()
{
    int a,b,c;
    printf("Enter 1st value : ");
    scanf("%d", &a);

    printf("Enter 2nd value : ");
    scanf("%d", &b);

     c=a-b;

    printf("THE SUBTRACTION IS : %d", c);
     return 0;
    
}

int multiply()
{
    int a,b,c;
    printf("Enter 1st value : ");
    scanf("%d", &a);

    printf("Enter 2nd value : ");
    scanf("%d", &b);

     c=a*b;

    printf("THE MULTIPLICATION IS : %d", c);
     return 0;
    
}

int division()
{
    int a,b,c;
    printf("Enter 1st value : ");
    scanf("%d", &a);

    printf("Enter 2nd value : ");
    scanf("%d", &b);

     c=a/b;

    printf("THE DIVISION IS : %d", c);
     return 0;
    
}
