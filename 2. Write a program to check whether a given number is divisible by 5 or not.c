//2. Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    if(x%5==0)
        printf("%d IS DIVISIBLE BY 5",x);
    else
        printf("%d IS NOT DIVISIBLE BY 5",x);
    return 0;

}


