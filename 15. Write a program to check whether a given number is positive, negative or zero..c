//15. Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
#include<conio.h>
 int main()
 {
     int x;
     printf("Enter a number\n");
     scanf("%d",&x);
     if(x>0)
        printf("%d is POSITIVE",x);
     else if(x<0)
        printf("%d is NEGATIVE",x);
     else
        printf("%d is ZERO  hahaha",x);
     return 0;
 }
