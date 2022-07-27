//13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
#include<conio.h>
 int main()
 {
     int x;
     printf("Enter any number\n");
     scanf("%d",&x);
     if(x%2==0 && x%3==0)
        printf("%d is Divisible by 2 and 3",x);
     else
        printf("%d is not Divisible by 2 and 3",x);
     return 0;
}
