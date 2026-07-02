

class Store:
    def __init__(self, name, address):
        self.name = name
        self.address = address
        self.products = {}
        self.customers = {}
        self.sellers = {}
        self.orders = {}

    def add_product(self, product):
        self.products[product.name] = product
        print(f"\nProduct {product.name} added successfully!")

    def remove_product(self, product_name):
        if product_name in self.products:
            del self.products[product_name]
            print(f"\nProduct {product_name} removed successfully!")
        else:
            print(f"\nProduct {product_name} not found!")
    
    def add_customer(self, customer):
        self.customers[customer.email] = customer
        print(f"\nCustomer {customer.name} added successfully!")
    
    def add_seller(self, seller):
        self.sellers[seller.email] = seller
        print(f"\nSeller {seller.name} added successfully!")

    def customer_login(self, customer):
        if customer.email in self.customers:
            if customer.password != self.customers[customer.email].password:
                print("\nInvalid credentials. Please try again.")
                return False
            else: 
                print("\nLogin successful.")
                return True
        else:
            print("\nInvalid credentials. Please try again.")
            return False
        
    def seller_login(self, seller):
        if seller.email in self.sellers:
            if seller.password != self.sellers[seller.email].password:
                print("\nInvalid credentials. Please try again.")
                return False
            else: 
                print("\nLogin successful.")
                return True
        else:
            print("\nInvalid credentials. Please try again.")
            return False
        
    def see_product_list(self):
        if len(self.products) == 0:
            print("\nNo product listed yet!\n")
            return False
        print("\n=== Product List ===")
        for product_name, product in self.products.items():
            if product.quantity > 0:
                print(f"{product_name} price: {product.price} quantity: {product.quantity}")
        
    def order_product(self, order):
        if order.productName in self.products:
            if order.quantity <= self.products[order.productName].quantity:
                self.products[order.productName].quantity -= order.quantity

                if order.productName not in self.orders:
                    self.orders[order.productName] = []

                self.orders[order.productName].append(order)
                print(f"\nYour order for {order.productName} is placed successfully!\n")
                return True
            else:
                print(f"\nMaximum quantity limit is {self.products[order.productName].quantity}")
                return False
            
        else:
            print("\nInvalid product name given")
            return False
    def show_order_list(self): 
        """Display all orders in the store."""
        if not self.orders:
            print("\nNo orders placed yet.\n")
            return

        print("\n=== Order List ===")
        total_orders = 0
        for product_name, order_list in self.orders.items():
            print(f"\nProduct: {product_name}")
            for i, order in enumerate(order_list, 1):
                print(f"  Order #{i}: Quantity: {order.quantity}")
                total_orders += 1
        print(f"\nTotal orders: {total_orders}")
