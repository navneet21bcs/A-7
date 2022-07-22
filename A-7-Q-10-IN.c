/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,x,r,s;
    printf("Arm strong number are ");
    for(n=1;n<=1000;n++)
    {
        s=0;
        x=n;
        while(x>0)
        {
            r=x%10;
            s=s+r*r*r;
            x=x/10;
        }
        if (s==n)
        printf("%d\n",n);
        
        
    }
    
       return 0;
}
