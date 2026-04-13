#include<stdio.h>

int sum(int n){
    int sum=0;
    while(n>0){
        sum=sum+n&10;
    }
    return sum;
}

int main(){
    int num;
    printf("Enter the no.: ");
    sacnf("%d",&num);
    if(magic(num))
     printf("Magic no.");
    else
     printf("Not a magic no.");
     return 0; 
}