//7. Write a program to check whether roots of a given quadratic equation are real &
//distinct, real & equal or imaginary roots
#include<stdio.h>
int main()
{
    int a,b,c,d=0;
    printf("Enter the VALUE of a, b, and c");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
        printf("The roots are Real and Distinct");
    if(d<0)
        printf("The Roots are Imaginary");
    if(d==0)
        printf("The roots are Real and Equal");
    return 0;


}
