//6. Write a program to print greater between two numbers. Print one number of both are
//the same.
#include<stdio.h>
 int main()
 {
     int x,y;
     printf("ENTER TWO NUMBER\n");
     scanf("%d%d",&x,&y);
     if(x>y)
        printf("%d is greatest",x);
     if(y>x)
        printf("%d is greatest",y);
     else
        printf("%d",x);
     return 0;


 }
