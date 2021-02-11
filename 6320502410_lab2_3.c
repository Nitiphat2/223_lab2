#include<stdio.h>
int main()
{
    int A,B,C,num[3],i,count;
    scanf("%d%d%d",A,B,C);
    char na[3];
    for(i = 0;i<3;i++)
    {
        scanf(" %c",&na[i]);
    }
    if(A>B)
    {
        count=A;
        A=B;
        B=count;
    }
    if(A>B)
    {
        count=A;
        A=C;
        C=count;
    }
    if(B>C)
    {
        count=B;
        B=C;
        C=count;
    }

}
