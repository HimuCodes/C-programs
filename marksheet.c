#include <stdio.h>
int main()
{
    int rno,p,c,m,h,e,ttl;
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

    printf("\n Roll number : %d", rno);
    printf("\n Physics marks : %d", p);
    printf("\n Chemistry marks : %d", c);
    printf("\n Maths marks : %d", m);
    printf("\n Hindi marks : %d", h);
    printf("\n English marks : %d", e);

    printf("\n Percentage = %.2f%%", per);
    printf("\n Result = %c", res);
    printf("\n Division = %c", div);

    return 0;
}