//14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
#include<conio.h>
 int main()
 {
     int x;
     printf("Enter any number\n");
     scanf("%d",&x);
     if(x%7==0 || x%3==0)
        printf("%d is Divisible by 7 or 3",x);
     else
        printf("%d is not Divisible by 7 or 3",x);
     return 0;
}
