#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    float cost,sum=0,pro = 0;
    int a,c1;
    scanf("%f",&cost);
    if(c == 'A')
    {
        cost = cost - 200;
        pro = cost * 3;
        c1 = floor(pro);
        a = pro * 100;
        a = a%120;
        if(a >= 60)
        {
            pro = pro - c1 - 0.60;
            sum = 199 + c1 + 1;
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
        cost = cost - 400;
        pro = cost * 2;
        c1 = floor(pro);
        a = pro * 100;
        a = a%120;
        if(a >= 60)
        {
            pro = pro - c1 - 0.60;
            sum = 299 + c1 + 1 + pro;
            printf("%.2f",sum);
        }
        else
        {
            sum = 299 + pro;
            printf("%.2f",sum);
        }
    }
}
