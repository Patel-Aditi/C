//structure 
#include<stdio.h>
#include<string.h>

struct student{
   char name[50];
   int marks;
   int rollNo;
};

int main(){
     struct student s1[5];
     for(int i=1;i<=5;i++){
      printf("Enter %d name: ",i);
      scanf("%s",s1[i].name);
      printf("Enter marks: ");
      scanf("%d",&s1[i].marks);
      printf("Enter roll no.: ");
      scanf("%d",&s1[i].rollNo);
     }
     
    //printf("Student Info.\n");
    for(int i=1;i<=5;i++){
       printf("Info. of %d student\n",i);
       printf("Name:%s\n",s1[i].name);
       printf("Marks:%d\n",s1[i].marks);
       printf("Roll no. : %d\n",s1[i].rollNo);
     }
    
    // return 0;
}