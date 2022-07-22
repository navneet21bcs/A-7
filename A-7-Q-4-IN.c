/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  int a,b,i,hcf=1;
  printf("Enter 2 number \n");
  scanf("%d%d",&a,&b);
  int min = a<b?a:b;
  
  for(i=1;i<=min;i++)
  {
     if((a%i==0)&& (b%i==0))
     hcf=i;
      
  }
    printf("hcf is % d",hcf);
    return 0;
}
