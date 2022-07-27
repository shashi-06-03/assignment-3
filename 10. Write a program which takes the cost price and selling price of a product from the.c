//10. Write a program which takes the cost price and selling price of a product from the
//user. Now calculate and print profit or loss percentage.
#include<stdio.h>
 int main()
 {
     float cp,sp,loss_percent=0,profit_percent=0;
     printf("Enter cost price and selling price");
     scanf("%f%f",&cp,&sp);
     if(cp>sp){
        loss_percent= ((cp-sp)/cp)*100;
     printf("loss percent=%f",loss_percent);
     }
     else if(sp>cp){
        profit_percent= ((sp-cp)/cp)*100;
     printf("profit percent=%f",profit_percent);
     }
     else{
        printf("NO PROFIT NO LOSS");
     }
     return 0;

 }
