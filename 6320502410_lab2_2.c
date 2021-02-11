#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    float cost,sum=0,pro = 0;
    int a;
    scanf("%f",&cost);
    if(c == 'A')
    {
        cost = cost - 200;
        pro = cost * 2;
        a = pro * 100;
        a = a%120;
        if(a >= 60)
        {
            sum = 199 + pro + 1;
            printf("%.2f",sum);
        }
        else
        {
            sum = 199 + pro;
            printf("%.2f",sum);
        }
    }
    else if(c == 'B')
    {

    }
}
