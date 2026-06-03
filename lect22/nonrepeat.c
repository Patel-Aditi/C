//check and print the frequency of first non repeating char
#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "ababddef";
    int freq[256] = {0};  //256 is the max value of ascii value 
    int ln = strlen(str);
    for (int i=0;i<ln;i++) {
        freq[str[i]]++; 
    }

    for (int i=0;i<256;i++) {
        if (freq[i]==1) {
            printf("%c:%d", i,freq[i]);
            break;
        }
    }
    return 0;
}