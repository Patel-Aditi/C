//pointer swap without using third variable
#include<stdio.h>

int swap(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
     printf("a=%d b=%d",*a,*b);
     return 0;
}

int main(){
    int a=5;
    int b=10;
    swap(&a,&b);
}

// //pointer swap without using third variable
// #include<stdio.h>

// // int swap(int *a,int *b){
// //     *a=*a+*b;
// //     *b=*a-*b;
// //     *a=*a-*b;
// //      printf("a=%d b=%d",*a,*b);
// //      return 0;
// // }

// int main(){
//     int a=10;
//     int b=5;
//      a=a+b;
//      b=a-b;
//      a=a-b;
//      printf("a=%d b=%d",a,b);
//      return 0;
//  //   swap(&a,&b);
// }
