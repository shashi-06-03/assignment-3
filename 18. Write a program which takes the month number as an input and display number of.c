//18. Write a program which takes the month number as an input and display number of
//days in that month
#include<stdio.h>
 int main()
 {
     int x,y;
     printf("ENTER number of MONTH");
     scanf("%d",&x);
     if(x==1 || x==3 || x==5 || x==7 || x==8 || x==10 || x==12)
        printf("THE %d month has 31 days ",x);
     else if(x==4 || x==6 || x==9 || x==11)
        printf("THS %d month has 30 days",x);
     else if(x==2)
        {
        printf("Enter YEAR");
        scanf("%d",&y);
            if(y%100==0)
            {
                if(y%400==0)
                 printf("%d nd month has LEAP year i.e 29 days",x);
                else if(y%4==0)
                 printf("%d nd month has LEAP YEAR i.e 29 days",x);
                else
                 printf("%d nd has NON LEAP YEAR i.e 28 days",x);
            }
            else
                printf("%d has NON leap year ie 28 days",x);
      }else
          printf("INVALID MONTH");
            return 0;
    }
