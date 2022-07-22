/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,i,hcf=1,min;
    printf("Enter 2 number");
    scanf("%d%d",&a,&b);
    min=a<b?a:b;
    for (i=1;i<=min;i++)
    {
        if ((a%i==0)&&(b%i==0))
        hcf=i;
    }
    if (hcf==1)
    printf("Co-prime");
    else
    printf("Not Co-prime");
    return 0;
}
