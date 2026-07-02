# practice 3

# Create an e shopping app using OOP practices where -

# - Customer can create new account with email, password.
# - Sellers can create new account, publish products to sell.
# - Customers can see all products and place order.
# - If an order is placed monitor the stock, don’t show stock out products.



from person import Customer, Seller
from order import Order
from product import Product
from store import Store


store = Store("ABC Store", "Dhaka")



while True:
    print("1. Create customer account.")
    print("2. Create Seller account.")
    print("3. Login as customer.")
    print("4. Login as Seller.")
    print("5. Exit")


    num = int(input("Select you choice: "))

    if num == 1:
        email = input("Enter customer email: ")
        password = input("Enter password: ")

        customer = Customer(email=email, password=password)

        store.add_customer(customer=customer)
        print("Customer account created successfully. please login!")

    elif num == 2:
        email = input("Enter seller email: ")
        password = input("Enter password: ")

        seller = Seller(email=email, password=password)

        store.add_seller(seller=seller)
        print("Seller account created successfully. please login!")
    elif num == 3:
        email = input("Enter customer email: ")
        password = input("Enter password: ")

        customer = Customer(email=email, password=password)

        res = store.customer_login(customer=customer)

        if res:
            while True:
                print("1. See all product list.")
                print("2. Order product")
                print("3. See order list.")
                print("4. Exit")

                choice = int(input("Enter you choice: "))

                if choice == 1:
                    store.see_product_list()

                elif choice == 2:
                    productName = input("Enter product name: ")
                    quantity = int(input("Enter quantity: "))

                    order = Order(productName=productName, quantity=quantity)

                    store.order_product(order)

                elif choice == 3:
                    store.show_order_list()
                
                elif choice == 4:
                    break
                
                else:
                    print("Invalid choice. Please try again.")
    elif num == 4:
        email = input("Enter seller email: ")
        password = input("Enter password: ")

        seller = Seller(email=email, password=password)

        res = store.seller_login(seller=seller)

        if res:
            while True:
                print("1. See all product list.")
                print("2. Add product")
                print("3. Remove product.")
                print("4. Exit")

                choice = int(input("Enter you choice: "))

                if choice == 1:
                    store.see_product_list()

                elif choice == 2:
                    name = input("Enter product name: ")
                    price = int(input("Enter product price: "))
                    quantity = int(input("Enter quantity: "))

                    product = Product(name, price, quantity)

                    store.add_product(product=product)

                elif choice == 3:
                    productName = input("Enter product name: ")
                    store.remove_product(productName=productName)
                
                elif choice == 4:
                    break
                
                else:
                    print("Invalid choice. Please try again.")
    
    elif num == 5:
        break

    else:
        print("Invalid choice. Please try again.")
        

