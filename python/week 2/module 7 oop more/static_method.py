# static attribute (class attribute)
# static method @staticmethod
# class method @classmethod
# difference between class method and static method


class Shopping:
    cart = [] #class attribute # static attribute
    origin = 'China' 

    def __init__(self, name, location):
        self.name = name
        self.location = location

    def purchase(self, item, price, amount):
        remaining = amount - price
        print(f"buying {item} for price: {price} and remaining: {remaining}")

    @classmethod
    def hudai_dekhi(self, item):
        print(f"hudai dekhi intu kinmu na: {item}")

    @staticmethod
    def multiply(a, b):
        print(a * b)
        return a * b



jamuna = Shopping("Jamuna", "Dhaka")
# jamuna.purchase("lungi", 200, 1000)
# jamuna.hudai_dekhi("Shirt")

# Shopping.purchase("Shirt", 500, 1000)

# class method
Shopping.hudai_dekhi("Shirt")

# static method
Shopping.multiply(5, 6) 