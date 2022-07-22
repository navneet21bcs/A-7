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
  printf("1");
  for(i=0;i<n-1;i++)
  {
      next = prev+cur;
      printf("%d",next);
      prev=cur;
      cur=next;
  }

    return 0;
}
