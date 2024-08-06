#include <stdio.h>

// Structure to represent the date of joining
typedef struct {
    int day;
    int month;
    int year;
} Date;

// Structure to represent an employee
typedef struct {
    int employeeCode;
    char employeeName[50];
    float salary;
    int departmentNumber;
    Date dateOfJoining;
} Employee;

// Function to input employee information
void inputEmployee(Employee *e) {
    printf("Enter employee code: ");
    scanf("%d", &e->employeeCode);
    
    printf("Enter employee name: ");
    scanf(" %[^\n]%*c", e->employeeName); // Read string with spaces
    
    printf("Enter salary: ");
    scanf("%f", &e->salary);
    
    printf("Enter department number: ");
    scanf("%d", &e->departmentNumber);
    
    printf("Enter date of joining (day month year): ");
    scanf("%d %d %d", &e->dateOfJoining.day, &e->dateOfJoining.month, &e->dateOfJoining.year);
}

// Function to display employee information
void displayEmployee(const Employee *e) {
    printf("\nEmployee Code: %d\n", e->employeeCode);
    printf("Employee Name: %s\n", e->employeeName);
    printf("Salary: %.2f\n", e->salary);
    printf("Department Number: %d\n", e->departmentNumber);
    printf("Date of Joining: %02d/%02d/%04d\n", e->dateOfJoining.day, e->dateOfJoining.month, e->dateOfJoining.year);
}

// Main function
int main() {
    Employee employees[10];
    
    // Input information for 10 employees
    for (int i = 0; i < 10; i++) {
        printf("\nEnter information for employee %d:\n", i + 1);
        inputEmployee(&employees[i]);
    }
    
    // Display information for employees with salary >= 10000
    printf("\nEmployees with salary >= 10000:\n");
    for (int i = 0; i < 10; i++) {
        if (employees[i].salary >= 10000) {
            displayEmployee(&employees[i]);
        }
    }
    
    return 0;
}
