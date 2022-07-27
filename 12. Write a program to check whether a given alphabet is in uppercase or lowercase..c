//12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter any character");
    scanf("%c",&x);
    if(x>=65 && x<=90)
        printf("%c is UPPERCASE",x);
    else if(x>=97 && x<=122)
        printf("%c is LOWERCAASE",x);
    return 0;
}
