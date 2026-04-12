#include <stdio.h>

int main() {
    // Write C code here
    //printf("Try programiz.pro");
    int num=65;
    for(int i=0;i<3;i++){
        for(int j=3;j>i;j--){
            printf("%c",num++);
        }
    printf("\n");
}

    return 0;
}