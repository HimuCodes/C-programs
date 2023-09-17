#include <stdio.h>
 int add();
 int multiply();
 int subtraction();
 int division();

 int main()
 {
    int a,b,c,d,e;

    printf("****** 1 - ADDITION ******");
    printf("\n****** 2 - SUBTRACTION ******");
    printf("\n****** 3 - MULTIPLICATION ******");
    printf("\n****** 4 - DIVISION ******");
    printf("\n****** 5 - QUIT ******");

    printf("\n\n\n Choose any one : ");
    scanf("%d", &e);


    switch(e)
    {
        case 1:
        a = add();
        printf("\n Addition = %d", a);
        break;
    
        case 2:
        b = subtraction();
        printf("\n Subtraction = %d", b);
        break;
    
        case 3:
        c = multiply();
        printf("\n Multipliaction = %d", c);
        break;

        case 4:
        d = division();
        printf("\n Division = %d", d);
        break;

        default:
        printf("WRONG KEY PRESS");
        break;
    }
    
 }

 int add()
{
    int a,b,c;

    printf("Enter 1st value : ");
    scanf("%d", &a);

    printf("Enter 2nd value : ");
    scanf("%d", &b);

     c=a+b;
    return (c);
    
}

int sub()
{
    int a,b,c;
    printf("Enter 1st value : ");
    scanf("%d", &a);

    printf("Enter 2nd value : ");
    scanf("%d", &b);

     c=a-b;
     return (c);
    
}

int multiply()
{
    int a,b,c;
    printf("Enter 1st value : ");
    scanf("%d", &a);

    printf("Enter 2nd value : ");
    scanf("%d", &b);

     c=a*b;
     return (c);
    
}

int division()
{
    int a,b,c;
    printf("Enter 1st value : ");
    scanf("%d", &a);

    printf("Enter 2nd value : ");
    scanf("%d", &b);

     c=a/b;
     return (c);
}