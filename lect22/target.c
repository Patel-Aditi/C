//remove the targeted word from the string
#include<stdio.h>
#include<string.h>
int  main(){
    char str[]="hello";
    char target='e';
    int j=0;
   char newstr[50];
    int ln=strlen(str);
    for(int i=0;i<ln;i++){
        if(str[i]!=target){
            newstr[j]=str[i];
            j++;
        }
    }
    newstr!='\0';
    printf("%s",newstr);
    return 0;

}