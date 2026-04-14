//array sum max
#include<stdio.h>
int main(){
int arr[5]={1,2,3,-4,5};
int max=arr[0];
for(int i=0;i<5;i++){
    int currSum=0;
    for(int j=i;j<5;j++){
        currSum=currSum+arr[j];
    }
    if(currSum>max)
    max=currSum;
}
printf("%d",max);
 return 0;
}