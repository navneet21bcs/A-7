/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  int i,prev =0,cur=1,next=0,n;
  printf("Enter number \n");
  scanf("%d",&n);
  
  for(i=0;1;i++)
  {
      next = prev+cur;
      
      prev=cur;
      cur=next;
      if (next==n)
      {
          printf("N.o found");
          break;
      }
      if (next>n)
      {
          printf("N.o not found");
          break;
      }
  }

    return 0;
}
