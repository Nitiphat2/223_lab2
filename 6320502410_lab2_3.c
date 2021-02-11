#include<stdio.h>
int main()
{
    int A,B,C,i,count,num[3];
    scanf("%d%d%d",&A,&B,&C);
    char na[3];
    for(i = 0; i<3; i++)
    {
        scanf(" %c",&na[i]);
    }
    if(A > B)
    {
        count = A;
        A = B;
        B =count;
    }
    if(B > C)
    {
        count = B;
        B = C;
        C = count;
    }
    if (A > C)
    {
        count = A;
        A = C;
        C = count;
    }
    if(B > C)
    {
        count = B;
        B = C;
        C = count;
    }
    if(A > B)
    {
        count = A;
        A = B;
        B = count;
    }
    for(i=0; i<3; i++)
    {
        if(na[i] == 'A')
        {
            num[i] = A;
        }
        else if(na[i] == 'B')
        {
            num[i] = B;
        }
        else if(na[i] == 'C')
        {
            num[i] = C;
        }
    }
    printf("%d %d %d",num[0],num[1],num[2]);
}
