#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    float cost,sum=0,pro = 0;
    int a,c1,i;
    scanf("%f",&cost);
    if(c == 'A')
    {
        cost = cost - 200;
        pro = cost * 3;
        c1 = floor(pro);
        a = pro * 100;
        while(a > 60)
        {
            a = a % 60;
            i++;
        }
        if(i = 1)
        {
            pro = pro - 0.60;
        }
        sum = 199 + i + pro;
        printf("%.2f",sum);
    }
    else if(c == 'B')
    {
        cost = cost - 400;
        pro = cost * 2;
        c1 = floor(pro);
        a = pro * 100;
        while(a > 60)
        {
            a = a % 60;
            i++;
        }
        if(i = 1)
        {
            pro = pro - 0.60;
        }
        sum = 299 + i + pro;
        printf("%.2f",sum);
    }
}
