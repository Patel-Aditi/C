#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    printf("Enter %d elements: ",n);
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }

    int j=0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]==0){
            arr[j]=arr[i];
            j++;
        }
    } 
    //int j=0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]<0){
            arr[j]=arr[i];
            j++;
        }
    } 

    //int j=0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]>0){
            arr[j]=arr[i];
            j++;
        }
    } 
    
    printf("%d",arr[j]);
        //if(arr[i]==0&&arr[i]<0&&arr[i]>0)
        // printf("%d",arr[i]);
        // else
        // printf("no");
       
}