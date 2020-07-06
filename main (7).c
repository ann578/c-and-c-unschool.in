#include <stdio.h>

 
struct employee
{
 
    char name[30];
    int id;
    float experience;
    float salary;
 
};
 
int main()
{
    int i;
 
   struct employee employees[5];
 

 
    printf("Enter 5 Employees Details \n \n");
    for(i=0; i<5; i++){
 
        printf("Employee %d:- \n",i+1);
        
        printf("Name: ");
        scanf("%s",employees[i].name);
        printf("Id: ");
        scanf("%d",&employees[i].id);
        printf("experience: ");
        scanf("%f",&employees[i].experience);
        printf("Salary: ");
        scanf("%f",&employees[i].salary);
        printf("\n");
    }
 
    
 
    printf("-------------- All Employees Details ---------------\n");
 
    for(i=0; i<5; i++){
 
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Id \t: ");
        printf("%d \n",employees[i].id);
        printf("experience\t:");
        printf("%f",employees[i].experience);
 
        printf("Salary \t: ");
        printf("%f \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
 
}