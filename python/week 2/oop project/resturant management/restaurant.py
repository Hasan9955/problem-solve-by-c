from menu import Menu

class Restaurant: 
    def __init__(self, name):
        self.name = name 
        self.employees = []
        self.menu = Menu()

    def add_employee(self, employee): 
        self.employee.append(employee)
        print(f"{employee.name} added successfully.")

    def view_employee(self):
        print("Employee List!!")
        for i, emp in enumerate(self.employee):
            print(f"{i + 1}. Name: {emp.name}, Phone: {emp.phone}, Email: {emp.email}, Address: {emp.address}, Age: {emp.age}, Designation: {emp.designation}, Salary: {emp.salary}")
            print()
