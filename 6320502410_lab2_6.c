#include<stdio.h>
int main()
{
    int n,i,j,k,o[1000];
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        j = n %10;
        switch(j)
        {
            case 0 : o[i] = 0; break;
            case 1 : o[i] = 1; break;
            case 2 : o[i] = 2; break;
            case 3 : o[i] = 3; break;
            case 4 : o[i] = 4; break;
            case 5 : o[i] = 5; break;
            case 6 : o[i] = 6; break;
            case 7 : o[i] = 7; break;
            case 8 : o[i] = 8; break;
            case 9 : o[i] = 9; break;
        }
        n=n/10;
    }
    for(;i>0;)
    {
        i--;
        switch(o[i])
        {
            case 0 : printf("Zero"); break;
            case 1 : printf("One"); break;
            case 2 : printf("Two"); break;
            case 3 : printf("Three"); break;
            case 4 : printf("Four"); break;
            case 5 : printf("Five"); break;
            case 6 : printf("Six"); break;
            case 7 : printf("Seven"); break;
            case 8 : printf("Eight"); break;
            case 9 : printf("Nine"); break;
        }
        if(i>0)
        {
            printf("-");
        }
    }
}
