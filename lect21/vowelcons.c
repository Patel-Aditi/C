#include<stdio.h>
#include<string.h>
int main(){
char str[]="aeioubvs";
   int len=strlen(str);
   int vowel=0;
   int consonant=0;
   for(int i=0;i<len;i++){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
      //  vowel++;
        printf("vowel:%c\n",str[i]);
       vowel++;
    }else{
        printf("consonant:%c\n",str[i]);
        consonant++;
    }
}
    return 0;
}