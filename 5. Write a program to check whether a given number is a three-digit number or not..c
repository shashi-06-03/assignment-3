//5. Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
 int main()
 {
     int x;
     printf("Enter a number\n");
     scanf("%d",&x);
     if(x>=100 && x<=999)
        printf("THE NUMBER IS THREE DIGIT NUMBER\n");
     else
        printf("THE NUMBER IS NOT THREE DIGIT NUMBER\n");
     return 0;
 }
