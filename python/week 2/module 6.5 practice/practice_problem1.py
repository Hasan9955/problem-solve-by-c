# Python Week 2 Practice Day 01

# Create a Product class and a Shop class.
# Inside the Shop class, create a method name add_product which adds products using the Product class to the Shop class.
# Inside the Shop class, create a method name buy_product which is used to buy a product and check whether this product is available or not. If you successfully buy a product, then throw a Congress message.
# What is Inheritance? Explain with examples
# What are Encapsulation and Access Modifiers? Explain with examples





class Product:
    def __init__(self, name):
        self.name = name 
    
class Shop(Product):

    def __init__(self, name):
        self.name = name
        self.product_list = []


    def add_product(self, name):
        super().__init__(name)
        self.product_list.append(name)

    def buy_product(self, name):
        if name in self.product_list:
            print(f"Congrats, you have successfully bought {name}")
        else:
            print("Sorry, the product is not available")

    
store = Shop("Hasan's Shop")

store.add_product("Banana")
store.add_product("Apple")
store.add_product("Orange")

# store.buy_product("Tata")
store.buy_product("Apple")