
class Shop:

    shopping_mall = "Jamuna"

    def __init__(self, buyer):
        self.buyer = buyer
        self.cart = []  # cart is an instance attribute

    def add_to_cart (self, item):
        self.cart.append(item)



hasan = Shop("Hasan Ali")

hasan.add_to_cart("Apple")
hasan.add_to_cart("Banana")

print(hasan.cart)

abdullah = Shop("Abdullah")

abdullah.add_to_cart("Mouse")
abdullah.add_to_cart("Watch")

print(abdullah.cart)