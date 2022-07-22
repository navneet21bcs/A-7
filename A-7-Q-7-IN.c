/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,num,count,a,b;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    for(num=a;num<=b;num++)
    {
        count=0;
    
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
            
        }
        }
        if (count==0 && num!=1)
        
         printf("%d\n",num);
}
       return 0;
}
