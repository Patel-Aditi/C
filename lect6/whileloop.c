#include<stdio.h>
int main()
{
  //  palindrome 
  int num=25652;
  int original=num;
    int res=0;
   while(num!=0)
    { 
        int lastD=num%10;
       res=res*10+lastD;
        num=num/10;
   }
    printf("%d",res);
     if(original==num)
     {
        printf("\npalindrom");
     }
    else 
    {
       printf("\nnot palindrom");
    }
    return 0;
 }