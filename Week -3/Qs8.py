class Date:
    def __init__(self, day=1, month=1, year=2020):
        self.day = day
        self.month = month
        self.year = year

    def __str__(self):
        return f"{self.day:02d}/{self.month:02d}/{self.year}"

class Employee:
    def __init__(self, employee_code=0, name="", salary=0.0, department_number=0, date_of_joining=None):
        self.employee_code = employee_code
        self.name = name
        self.salary = salary
        self.department_number = department_number
        self.date_of_joining = date_of_joining if date_of_joining is not None else Date()

    def __str__(self):
        return (f"Employee Code: {self.employee_code}\n"
                f"Employee Name: {self.name}\n"
                f"Salary: {self.salary:.2f}\n"
                f"Department Number: {self.department_number}\n"
                f"Date of Joining: {self.date_of_joining}")

def input_employee():
    employee_code = int(input("Enter employee code: "))
    name = input("Enter employee name: ")
    salary = float(input("Enter salary: "))
    department_number = int(input("Enter department number: "))
    day, month, year = map(int, input("Enter date of joining (day month year): ").split())
    date_of_joining = Date(day, month, year)
    return Employee(employee_code, name, salary, department_number, date_of_joining)

def main():
    employees = []
    
    # Input information for 10 employees
    for i in range(10):
        print(f"\nEnter information for employee {i + 1}:")
        employee = input_employee()
        employees.append(employee)
    
    # Display information for employees with salary >= 10000
    print("\nEmployees with salary >= 10000:")
    for emp in employees:
        if emp.salary >= 10000:
            print("\n" + str(emp))

if __name__ == "__main__":
    main()
