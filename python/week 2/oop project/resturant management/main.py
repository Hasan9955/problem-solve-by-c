from foodItem import FoodItem
from menu import Menu
from user import Customer, Admin, Employee
from restaurant import Restaurant
from orders import Order


amar_restaurant = Restaurant("Amar Restaurant")
 

def customer_menu():
    name = input("Enter your name: ")
    phone = input("Enter your phone number: ")
    email = input("Enter your email: ")
    address = input("Enter your address: ")
    customer = Customer(name, phone, email, address)
    
    while True:
        print(f"Welcome {customer.name}!")
        print("1. View Menu")
        print("2. Add to Cart")
        print("3. View Cart")
        print("4. Checkout")
        print("5. Exit")

        choice = int(input("Enter your choice: "))

        if choice == 1:
            customer.view_menu(amar_restaurant)
        elif choice == 2:
            item_name = input("Enter the item name: ")
            quantity = int(input("Enter the quantity: "))
            customer.add_to_cart(amar_restaurant, item_name, quantity)
        elif choice == 3:
            customer.view_cart()
        elif choice == 4:
            customer.checkout()
        elif choice == 5:
            break
        else:
            print("Invalid choice. Please try again.")



def admin_menu():
    name = input("Enter your name: ")
    phone = input("Enter your phone number: ")
    email = input("Enter your email: ")
    address = input("Enter your address: ")
    admin = Admin(name, phone, email, address)
    
    while True:
        print(f"Welcome {admin.name}!")
        print("1. Add New Item")
        print("2. Add new employee")
        print("3. View Employee List")
        print("4. View Items")
        print("5. Delete item")
        print("6. Exit")

        choice = int(input("Enter your choice: "))

        if choice == 1:
            item_name = input("Enter the item name: ")
            price = int(input("Enter item price: "))
            item_quantity = int(input("Enter item quantity: "))
            item = FoodItem(item_name, price, item_quantity)
            admin.add_new_item(amar_restaurant, item=item)

        elif choice == 2:
            name = input("Enter the employee name: ")
            phone = input("Enter the employee phone number: ")
            email = input("Enter the employee email: ")
            address = input("Enter the employee address: ") 
            age = int(input("Enter the employee age: "))
            designation = input("Enter the employee designation: ")
            salary = int(input("Enter the employee salary: "))

            employee = Employee(name=name, phone=phone, email=email, address=address, age=age, designation=designation, salary=salary)
            admin.add_employee(amar_restaurant, employee)
        elif choice == 3:
            admin.view_employee(amar_restaurant)
        elif choice == 4:
            admin.view_menu(amar_restaurant)
        elif choice == 5:
            item_name = input("Enter the item name: ")
            admin.delete_item(amar_restaurant, item_name)
        elif choice == 6:
            break
        else:
            print("Invalid choice. Please try again.")





# customer_menu()

while True:
    print("Welcome to Amar Restaurant!")
    print("1. Customer")
    print("2. Admin")
    print("3. Exit")

    choice = int(input("Enter your choice: "))

    if choice == 1:
        customer_menu()
    elif choice == 2:
        admin_menu()
    elif choice == 3:
        break
    else:
        print("Invalid choice. Please try again.")