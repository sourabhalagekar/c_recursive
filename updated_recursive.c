#include<stdio.h>

int fact(int num)
{
    if(num==0)
      return 1;
    else
      return num*fact(num-1);
}

int main()
{
  int inp;
  printf("ENTER THE NUM FOR FACTORIAL!!\n");
  if(inp<0)
  {
    print("Invalid input");
    return 0;
  }
  scanf("%d",&inp);
  printf("%d",fact(inp));
}
