/*Write a program to read to integer P and S & 
swap their value without using a third variable*/  
#include<stdio.h>
int main()
{
    int P,S;
    printf("Enter value of P & S ");
    scanf("%d%d",&P,&S);
  printf("before swapping P = %d, S = %d",P,S);  
    P=P+S; 
    S=P-S;
    P=P-S;
    printf("\nafter swapping P = %d, S = %d",P,S);
    return 0;
}