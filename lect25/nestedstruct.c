#include<stdio.h>
#include<string.h>

struct student{
   char name[50];
   int rollNo;
   char address[50];
};

struct pincode{
     int pincode;
     char city[50];
};

int main(){
     struct student s1;
     struct pincode s2;
    
      printf("Enter the name: ");
      scanf("%s",s1.name);
      printf("Enter roll no.: ");
      scanf("%d",&s1.rollNo);
      printf("Enter address: ");
      scanf("%s",s1.address);
      printf("Enter city: ");
      scanf("%s",s2.city);
      printf("Enter pincode: ");
      scanf("%d",&s2.pincode);

      printf("Student Info.\n");
      printf("Name:%s\n",s1.name);
      printf("Age:%d\n",s1.rollNo);
      printf("Roll no. : %d\n",s1.address);
      printf("City : %s\n",s2.city);
      printf("Pincode : %d\n",s2.pincode);

     return 0;
}