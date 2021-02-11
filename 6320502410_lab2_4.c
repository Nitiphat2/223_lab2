#include<stdio.h>
int main()
{
    char a,c[10];
    scanf("%c",&a);
    int n,k;
    scanf("%d",&n);
    k = n % 2;
    if(k == 1)
    {
        if(a >= 65 && a <= 73)
        {
            if(n == 5 || n == 15 || n == 25)
            {
                printf("\(^_^)/");
            }
            else
            {
                printf("(^_^)");
            }
        }
        else if(a >= 74 && a <= 82)
        {
            if(n == 5 || n == 15 || n == 25)
            {
                printf("\(*o*)/");
            }
            else
            {
                printf("(*o*)");
            }
        }
        else if(a >= 83 && a <= 90)
        {
            if(n == 5 || n == 15 || n == 25)
            {
                printf("\(T_T)/");
            }
            else
            {
                printf("(T_T)");
            }
        }
    }
    else
    {
        if(a >= 65 && a <= 73)
        {
            if(n == 5 || n == 15 || n == 25)
            {
                printf("\{@_@}/");
            }
            else
            {
                printf("{@_@}");
            }
        }
        else if(a >= 74 && a <= 82)
        {
            if(n == 5 || n == 15 || n == 25)
            {
                printf("\{*v*}/");
            }
            else
            {
                printf("{*v*}");
            }
        }
        else if(a >= 83 && a <= 90)
        {
            if(n == 5 || n == 15 || n == 25)
            {
                printf("\{x_x}/");
            }
            else
            {
                printf("{x_x}");
            }
        }
    }
}
