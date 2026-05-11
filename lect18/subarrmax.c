//find the max sum of subarray
#include <stdio.h>
int main(){
int arr[8]={2,1,5,4,7,8,1,2};
int k=2;
int n= sizeof(arr)/sizeof arr[0];
int sum=0;
for(int i=0;i<k;i++){
    sum=sum+arr[i];
}

int maxsum=sum;

for(int j=k;j<n;j++){
    sum=sum+arr[j]-arr[j-k];
    if(sum>maxsum){
       maxsum=sum;
    }
  }
  printf("%d",maxsum);
 return 0;
}
