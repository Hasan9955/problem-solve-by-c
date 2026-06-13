
class Shopping:
    def __init__(self, name):
        self.name = name
        self.cart = []

    
    def add_to_cart(self, item, price, quantity):
        product = {"item": item, "price": price, "quantity": quantity}
        self.cart.append(product)

    def checkout(self, amount):
        total = 0
        for item in self.cart:
            price = item['price'] * item['quantity']
            total += price
        
        print(f"Total price: {total}")
        
        if amount < total:
            print(f"Please provide {total - amount} more")
        elif amount == total:
            price("Here is your items")
        else:
            print(f"Here is you change: {amount - total}")

    def remove_from_cart(self, name):
        flag = False
        for i, item in enumerate(self.cart):
            if item['item'] == name:
                self.cart.pop(i)
                flag = True
                break

        if flag: print(f"{name} has been removed from you cart.")
        else: print(f"{name} not found in the cart.")
        


    


hasan = Shopping("Hasan")

hasan.add_to_cart("Banana", 10, 12)
hasan.add_to_cart("Rice", 500, 1)
hasan.add_to_cart("Egg", 13, 20)

# print(hasan.cart)

hasan.remove_from_cart("Rice")
hasan.checkout(1000)
