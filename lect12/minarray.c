#include <stdio.h>
int main(){
int arr[5]={9,2,3,5,8};
int min=arr[0];
for(int i=1;i<5;i++){
    if(arr[i]<min);{
    min=arr[i];
  }
} 
 printf("%d",min);
 return 0;
}