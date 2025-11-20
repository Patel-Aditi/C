#include <stdio.h>

int main() {
    
   for(int i=0;i<4;i++){
        for(int j=0;j<=i;j++){
            printf("*");
   }    
   
  for(int k=3;k>i;k--){
      printf(" ");
  }
  for(int k=3;k>i;k--){
      printf(" ");
  }
  
   for(int p=0;p<=i;p++)
   {
       printf("*");
   }
   printf("\n");
   }
   
   //lower half butterfly
   for(int i=0;i<3;i++){
        for(int j=3;j>i;j--){
            printf("*");
            
   }   
   for(int k=0;k<=i;k++){
       printf(" ");
   }
   for(int k=0;k<=i;k++){
       printf(" ");
   }
   for (int p=3;p>i;p--){
    printf("*");
   }
   printf("\n");
   }
//    for(int i=0;i<3;i++){
//       for(int j=i;j<=i;j++){
//             printf("*");
            
//   }   
//    for(int k=3;k>i;k--){
//        printf("*");
//    }
   
//    printf("\n");
//    }
   return 0;

}