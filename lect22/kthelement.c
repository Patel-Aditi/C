#include<stdio.h>
int main(){
    int arr[100];
    int n;
    printf("Declare the size of arr: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(int i=0;i<n;i++){
        scanf("%d\n",arr[i]);
    }
    int max=arr[0];
   for(int i=0;i<n;i++){
    if(arr[i]>max);{
    max=arr[i];
  }
} 
 printf("%d",max);

}