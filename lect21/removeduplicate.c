//remove duplicate word from a string
#include<stdio.h>
#include<string.h>
int main(){
    char str[]="hello";
    int len=strlen(str);
    int count;
    for(int i=0;i<len;i++){
        count=0;
        for(int j=0;j<i;j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count==0){
            printf("%c",str[i]);
        }
    }
    return 0;
}