#include <stdio.h>

void  odd_even(int n)
{
    if(n%2==0){
        printf("Even");
    }else{
        printf("Odd");
    }
    
   
}

int main() {
    int n;
    printf("Enter the no.: ");
    scanf("%d",&n);
    odd_even(n);
    return 0;
}