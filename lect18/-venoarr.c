//print -ve no. of array 
//jitni bhi subarrays ayengi unka phla -ve no. btana hai
//12,-1 =-1,-1 and -7=-1, -7and8=-7, 8and-15=-15, -15 and 30=-15
//O/P=-1,-1,-7,-15,-15
#include<stdio.h>
int main(){
    int arr[8]={12,-1,-7,8,-15,30,16,28};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    for (int i=0;i<=n-k;i++){
     int found=0;
     for(int j=i;j<i+k;j++){
        if(arr[j]<0){
            printf("%d ",arr[j]);
            found=1;
            break;
        }
     }
    if(!found){
        printf("0 ");
    }
}
    return 0;
}





