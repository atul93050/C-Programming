#include<stdio.h>
int main()
{
    char x;
    printf("\nEnter a character = ");
    scanf("%c",&x);
    switch (x)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
     case 'I':
      case 'O':
       case 'U':
       printf("\n%c is vowel",x);
        break;
    
    default:
    printf("\n%c is consonant");
        break;
    }
    return 0;
}