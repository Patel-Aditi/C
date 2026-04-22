//pointer
// #include <stdio.h>

// int main(){
//     int x=5;
//     int *a=&x;
//     printf("%d\n",x);
//     printf("%d\n",&x);
//     printf("%d\n",*a);
//     printf("%d\n",a);
//     return 0;
// }



#include<stdio.h>

int sum(int *a,int *b){
    
}
int main(){
    int a=5;
    int b=10;
    int data=sum(&a,&b);
    printf("%d",data);
    printf("%d",a+b);
}

