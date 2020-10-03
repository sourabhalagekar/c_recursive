#include<stdio.h>

int fact(int num)
{
    if(num==1)
      return 1;
    else
      return num*fact(num-1);
}

void main()
{
  int inp;
  printf("ENTER THE NUM FOR FACTORIAL!!\n");
  scanf("%d",&inp);
  printf("%d",fact(inp));
}
