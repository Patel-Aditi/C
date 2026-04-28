//pointer swap
#include<stdio.h>

int swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
     printf("a=%d b=%d",*a,*b);
     return 0;
}

int main(){
    int a=5;
    int b=10;
    swap(&a,&b);
}

