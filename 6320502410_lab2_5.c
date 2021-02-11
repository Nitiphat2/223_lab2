#include<stdio.h>
int main()
{
    int w,m,i;
    scanf("%d%d",&w,&m);
    switch(m)
    {
    case 1 :
        i = 31;
        break;
    case 2 :
        i = 28;
        break;
    case 3 :
        i = 31;
        break;
    case 4 :
        i = 30;
        break;
    case 5 :
        i = 31;
        break;
    case 6 :
        i = 30;
        break;
    case 7 :
        i = 31;
        break;
    case 8 :
        i = 31;
        break;
    case 9 :
        i = 30;
        break;
    case 10 :
        i = 31;
        break;
    case 11 :
        i = 30;
        break;
    case 12 :
        i = 31;
        break;
    }
    int j;
    j = (w + i)%7;
    if(j == 0)
    {
        printf("%d",j+7);
    }
    else
    {
        printf("%d",j);

    }

}
