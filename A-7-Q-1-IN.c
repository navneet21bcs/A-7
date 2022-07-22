/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int prev=0,cur=1,next=0,i,n;
    printf("Enter number");
    scanf("%d",&n);
    for (i=0;i<n-1;i++)
    {
        next=prev+cur;
        prev=cur;
        cur=next;
    }
    printf("%d",next);
    return 0;
}
