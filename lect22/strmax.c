#include <stdio.h>
#include <string.h>
int main(){
    char str[]="aabbcdddg";
    int ln=   strlen(str);
  int    freq[256]={0};
    char result;
    int max=0;
    for(int i=0;i<ln;i++){
     freq[str[i]]++;
    }
    for(int i=0;i<ln;i++){
     if(freq[str[i]]>max){
         max=freq[str[i]];
         result=str[i];

        }
    }
    printf("%c -> %d",result,max);
}