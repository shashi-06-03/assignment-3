//16. Write a program to check whether a given character is an alphabet (uppercase), an
//alphabet (lower case), a digit or a special character.
#include<stdio.h>
#include<conio.h>
 int main()
 {
    int x;
    printf("Enter any character");
    scanf("%c",&x);
    if(x>=65 && x<=90)
        printf("%c is UPPERCASE",x);
    else if(x>=97 && x<=122)
        printf("%c is LOWERCAASE",x);
    else if(x>=48 && x<=57)
            printf("%c is DIGIT",x);
    else
        printf("%c is SPECIAL CHRACTER",x);
    return 0;
}

