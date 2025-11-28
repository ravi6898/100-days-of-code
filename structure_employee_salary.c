#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    double salary;
    char designation[50];
};

void applySalaryHike(struct Employee *emp) {
    if (emp->salary < 20000) {
        double hike = emp->salary * 0.10;
        emp->salary += hike;
        printf("  Hike applied: %.2f%% (₹%.2f)\n", 10.0, hike);
    }
}

void displayEmployee(struct Employee emp) {
    printf("\nEmployee Details:\n");
    printf("  ID:           %d\n", emp.id);
    printf("  Name:         %s\n", emp.name);
    printf("  Salary:       ₹%.2f\n", emp.salary);
    printf("  Designation:  %s\n", emp.designation);
}

int main()
{
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    
    struct Employee *employees = (struct Employee *)malloc(n * sizeof(struct Employee));
    
    if (employees == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        printf("\n--- Employee %d ---\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &employees[i].id);
        getchar(); 
        
        printf("Enter Name: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0'; 
        
        printf("Enter Salary: ");
        scanf("%lf", &employees[i].salary);
        getchar(); 
        
        printf("Enter Designation: ");
        fgets(employees[i].designation, sizeof(employees[i].designation), stdin);
        employees[i].designation[strcspn(employees[i].designation, "\n")] = '\0';  // remove newline
    }
    
    printf("\n===============================================");
    printf("\n               SALARY HIKE PROCESSING\n");
    printf("===============================================\n");
    
    for (int i = 0; i < n; i++) {
        displayEmployee(employees[i]);
        printf("  Original Salary: ₹%.2f\n", employees[i].salary);
        
        applySalaryHike(&employees[i]);
        
        printf("  New Salary:      ₹%.2f\n", employees[i].salary);
        printf("-----------------------------------------------\n");
    }
    
    printf("\n===============================================");
    printf("\n            FINAL EMPLOYEE DETAILS\n");
    printf("===============================================\n");
    
    for (int i = 0; i < n; i++) {
        displayEmployee(employees[i]);
    }
    
    free(employees);
    return 0;
}