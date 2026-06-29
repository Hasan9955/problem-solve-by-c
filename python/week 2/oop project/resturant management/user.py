# Customer
# Employee
# Admin

from orders import Order

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

class Customer(User):
    def __init__(self, name, phone, email, address):
        super().__init__(name, phone, email, address)
        self.cart = Order()

    def view_menu(self, restaurant):
        restaurant.menu.show_menu()

    def add_to_cart(self, restaurant, item_name, quantity):
        item = restaurant.menu.find_item(item_name)
        if item:
            if item.quantity < quantity: 
                print(f"Insufficient quantity of {item_name} available in the menu.")
            else:
                item.quantity = quantity
                self.cart.add_item(item)
                print(f"{item_name} added to cart.")
        else:
            print(f"{item_name} not found in the menu.")

    def view_cart(self):
        print("-----------CART-----------")
        print("Name\t\t\tPrice\t\t\tQuantity")
        for item, quantity in self.cart.items.items():
            print(f"{item.name}\t\t\t{item.price}\t\t\t{quantity}")
        print(f"\n\nTotal price: {self.cart.total_price}")
    
    def checkout(self):
        self.cart.clear()
        print(f"Checkout successful. Total price: {self.cart.total_price}. Thank you for shopping with us.")

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

    def add_new_item(self, restaurant, item):
        restaurant.menu.add_menu_item(item)

    def delete_item(self, restaurant, item_name):
        restaurant.menu.remove_item(item_name)
         
    def view_menu(self, restaurant):
        restaurant.menu.show_menu()

# emp = Employee("Ratul", "012456658", "ratul@123", "Dhaka", 25, "Manager", 50000)

# ad = Admin("Admin", "012456658", "admin@123", "Dhaka")
# ad.add_employee("Sagor", "012456658", "sagor@123", "Dhaka", 25, "Manager", 50000)
# ad.add_employee("Ratul", "012456658", "ratul@123", "Dhaka", 25, "Manager", 50000)

# ad.view_employee()

# admin = Admin("Admin", "012456658", "admin@123", "Dhaka")
# restaurant = Restaurant("My Restaurant")


# mn = Menu()
# pizza = FoodItem("Pizza", 100, 10)
# burger = FoodItem("Burger", 50, 20)
# chicken = FoodItem("Chicken", 80, 15)
# admin = Admin("Admin", "012456658", "admin@123", "Dhaka")
# admin.add_new_item(restaurant, pizza)
# admin.add_new_item(restaurant, burger)
# admin.add_new_item(restaurant, chicken)
# # mn.add_menu_item(chicken)
# # mn.add_menu_item(burger)
# # mn.add_menu_item(pizza)
# # mn.show_menu()


# customer1 = Customer("Hasan", "0123456789", "hasan@123", "Dhaka")

# # customer1.add_to_cart("Pizza", restaurant, 1)
# # customer1.add_to_cart("Burger", 2)
# # customer1.add_to_cart("Chicken", 3)

# customer1.view_menu(restaurant) 
# customer1.add_to_cart(restaurant, "Pizza", 1)
# customer1.add_to_cart(restaurant, "Pizza", 12)
# customer1.add_to_cart(restaurant, "Pizza", 1)
# customer1.add_to_cart(restaurant, "Pizza", 1)
# customer1.add_to_cart(restaurant, "Pizza", 1)

# customer1.view_cart()