//write a program in c to use of assignment operator
#include<stdio.h>
int main()
{
  char x;
  printf("\nEnter a character = ");
  scanf("%c",&x);
  if(x>='a')
  {
    if(x<='z')
    {
      printf("\nAlphabet");
    }
    else if (x>='A'&&x<='Z')
    {
      printf("\nAlphabet");
    }
    else if (x>=0&&x<=9)
    {
      printf("\nDigit");
    }
  }
  else
  {
    printf("\nSpecial Character");
  }
  return 0;
}