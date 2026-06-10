//calloc use - this creates memory in chunks
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    int *arr=(int*)calloc(n,sizeof(int));
    printf("Enter %d elements: ",n);
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
}