#include <stdio.h>

int main() {
    // Write C code here
    //printf("Try programiz.pro");
    //int num=65;
    for(int i=0;i<3;i++){
        for(int j=3;j>i;j--){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
    printf("*");
}
for(int p=1;p<=i;p++){
    printf("*");
}
 printf("\n");
    }
    return 0;
}