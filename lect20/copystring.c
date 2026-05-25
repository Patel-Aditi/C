//not fully correct
#include<stdio.h>
 int main(){
     char name[]="string";
     char copy[10];
     //copy[i]=name[i];
     for(int i=0;name[i]!='\0';i++){
         copy[i]=name[i];
     }
     printf("%s",copy);
     return 0; 
 }



