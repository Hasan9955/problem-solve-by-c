# Customer
# Employee
# Admin


from abc import ABC


class User(ABC):
    def __init__(self, name, phone, email, address):
        self.name = name
        self.email = email
        self.phone = phone
        self.address = address


class Employee(User):
    def __init__(self, name, phone, email, address, age, designation, salary):
        super().__init__(name, phone, email, address)
        self.age = age
        self.designation = designation
        self.salary = salary


class Admin(User):
    def __init__(self, name, phone, email, address):
        super().__init__(name, phone, email, address)  

    def add_employee(self, restaurant, employee):
        restaurant.add_employee(employee)
        # employee = Employee(name, email, phone, address, age, designation, salary)
        # self.employee.append(employee)
        # print(f"{name} added successfully.")

    def view_employee(self, restaurant):
        restaurant.view_employee()
         


class Restaurant: 
    def __init__(self, name):
        self.name = name

        self.employees = []

    def add_employee(self, employee): 
        self.employee.append(employee)
        print(f"{employee.name} added successfully.")

    def view_employee(self):
        print("Employee List!!")
        for i, emp in enumerate(self.employee):
            print(f"{i + 1}. Name: {emp.name}, Phone: {emp.phone}, Email: {emp.email}, Address: {emp.address}, Age: {emp.age}, Designation: {emp.designation}, Salary: {emp.salary}")
            print()

class Menu:
    def __init__(self):
        self.items = []

    def add_menu_item(self, item):
        self.items.append(item)

    def find_item(self, item_name):
        for item in self.items:
            if item.name.lower() == item_name.lower():
                return item
        return None
    
    def remove_item(self, item_name):
        item = self.find_item(item_name)
        if item:
            self.items.remove(item)
            print(f"{item_name} removed from the menu.")
        else:
            print(f"{item_name} not found in the menu.")


    
# emp = Employee("Ratul", "012456658", "ratul@123", "Dhaka", 25, "Manager", 50000)

ad = Admin("Admin", "012456658", "admin@123", "Dhaka")
ad.add_employee("Sagor", "012456658", "sagor@123", "Dhaka", 25, "Manager", 50000)
ad.add_employee("Ratul", "012456658", "ratul@123", "Dhaka", 25, "Manager", 50000)

ad.view_employee()