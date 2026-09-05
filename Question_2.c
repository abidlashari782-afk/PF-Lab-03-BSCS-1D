#include<stdio.h>
int main(){
    char name[20];
     char stdID[10];
     char age[10];
     char uni[20]; 
     char dept[20];
     char sect[20];
    printf("Enter your Student ID: ");
    scanf("%s",&stdID);
    printf("Enter your Name: ");
    scanf("%s",&name);
    printf("Enter your Age: ");
    scanf("%s",&age);
    printf("Enter Universtiy name: ");
    scanf("%s",&uni);
    printf("Enter your Department: ");
    scanf("%s",&dept);
    printf("Enter your Section: ");
    scanf("%s",&sect);

    printf("___________________________________________________________________________\n");
    printf("Student ID | Student Name | Age   |   University   | Department | Section |\n");
    printf("____________________________________________________________________________\n");
    printf("%s         | %s   | %s  | %s | %s   | %s       |\n",stdID,name,age,uni,dept, sect);


}
