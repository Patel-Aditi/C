//single 2d array sum 
#include<stdio.h>

int main(){
int a[3][3]={{1,2,3},{1,2,3},{1,2,3}};
//int b[5][5]={{1,2,3,4,5},{1,2,3,4,5}};
int sum=0;
//int *p=arr;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        sum+=a[i][j];
    }
       printf("%d ",sum);
       printf("\t");
}
return 0;
}