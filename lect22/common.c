#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="hello";
    char str2[]="hiii";
    char nstr[50];
    int ln1 = strlen(str1);
    int ln2 = strlen(str2);
    for(int i=0;i<ln1;i++){
        for(int j=0;j<ln2;j++){
            if(strcmp (str1[i]==str2[j])){
                printf("%s",str1[i]);
                break;
            }
        }
    }
}