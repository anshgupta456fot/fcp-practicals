#include<stdio.h>

struct Employee{
    char name[50];
    int employeeid;
    float salary;
    char location[100];
};
int main(void)
{
    int numEmployees;
    printf("enter the number of employees: ");
    scanf("%d",&numEmployees);
    struct Employee employees[numEmployees];
    for(int i=0;i<numEmployees;i++)
    {
        printf("enter the details of the employee:\n ");
        printf("Name: ");
        scanf("%s",employees[i].name);
        printf("employeeId: ");
        scanf("%d",&employees[i].employeeid);
        printf("salary:");
        scanf("%f",&employees[i].salary);
        printf("location: ");
        scanf("%s",employees[i].location);
    }
    printf("\n\n The database of employee is:");
    for(int i = 0; i<numEmployees;i++)
    {
        printf("\nEmployee %d:\n",i+1);
        printf("Name:%s\n",employees[i].name);
        printf("EmployeeID: %d\n",employees[i].employeeid);
        printf("Salary: %f\n",employees[i].salary);
        printf("location: %s\n",employees[i].location);
    }
}