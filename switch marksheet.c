#include <stdio.h>
int main()
{
    int rno,p,c,m,h,e,ttl,choice;
    float per;
    char res,div;

    printf("Enter your roll number : ");
    scanf("%d", &rno);
    printf("Enter physics :");
    scanf("%d", &p);
    printf("Enter chemistry :");
    scanf("%d", &c);
    printf("Enter maths :");
    scanf("%d", &m);
    printf("Enter hindi :");
    scanf("%d", &h);
    printf("Enter english :");
    scanf("%d", &e);

    ttl = p+c+m+h+e;
    per = (ttl*100)/500;

    if(p<40 || c<40 || m<40 || h<40 || e<40 )
    {
        res = 'F';
    }
    else
    {
        res = 'P';
    }
    if(per<40)
    {
        div = 'N'; 
    } else if(per<50)
    {
        div = '3';
    } else if(per<60)
    {
        div = '2';
    }
    else 
    {
        div='1';
    }

    printf("1. Percentage");
    printf("\n2.Result");
    printf("\n3.Divison");

    printf("\n\n\n Choose any one : ");
    scanf("%d", &choice);


     switch (choice)
    {
        case 1:
        printf(" Percentage : %.2f", per);
        break;

        case 2:
        printf(" Result = %c", res);
        break;

        case 3:
        printf(" Division = %c", div);
        break;

        default:
        printf("WRONG KEY PRESS");
        break;
    }

    return 0;
}