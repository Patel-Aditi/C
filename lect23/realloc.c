//realloc
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
   // int arr[50];
    printf("Enter the size: ");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    printf("Enter %d elements: ",n);
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }


    int newsize;
    printf("Now enter new no.: ");
    scanf("%d",&newsize);
    arr=(int *) realloc (arr,newsize*sizeof(int));
    printf("Enter %d new elements: ",newsize);
    for(int i=0;i<newsize;i++){
        scanf("%d",&arr[i]);
    }
    //free arr =for the space which is not used
}