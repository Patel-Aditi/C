//palindrome or not string
#include<stdio.h>
#include<string.h>
int main(){
    char name[]="madam";
    int len=strlen(name);
    int istrue=1;
    for(int i=0;i<len/2;i++){
            if(name[i]!=name[len-i-1]){
                istrue=0;
                break;
            }
    }
        if(istrue){
            printf("palindrome");
        }
        else{
            printf("not palindrome");
        }
    return 0;
    
}