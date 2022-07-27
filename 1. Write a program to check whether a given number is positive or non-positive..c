//1. Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    if(x>0)
        printf("%d is POSITIVE",x);
    else
        printf("%d is NON POSITIVE",x);
    return 0;



}
