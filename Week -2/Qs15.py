class Student:
    def __init__(self, name, roll, percentage):
        self.name = name
        self.roll = roll
        self.percentage = percentage

def input_student_data():
    students = []
    for i in range(10):
        print(f"Enter details for student {i + 1}:")
        name = input("Name: ")
        roll = int(input("Roll number: "))
        percentage = float(input("Percentage: "))
        students.append(Student(name, roll, percentage))
    return students

def print_student_data(students):
    print("\nDetails of all students:")
    for i, student in enumerate(students):
        print(f"Student {i + 1}:")
        print(f"Name: {student.name}")
        print(f"Roll number: {student.roll}")
        print(f"Percentage: {student.percentage:.2f}")

def find_highest_percentage_student(students):
    highest_student = students[0]
    for student in students[1:]:
        if student.percentage > highest_student.percentage:
            highest_student = student
    return highest_student

def main():
    students = input_student_data()
    print_student_data(students)
    
    highest_student = find_highest_percentage_student(students)
    
    print("\nStudent with the highest percentage:")
    print(f"Name: {highest_student.name}")
    print(f"Roll number: {highest_student.roll}")
    print(f"Percentage: {highest_student.percentage:.2f}")

if __name__ == "__main__":
    main()
