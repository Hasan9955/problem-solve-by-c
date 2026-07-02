

class Person:
    def __init__(self, email, password):
        self.email = email
        self.password = password

    
class Customer(Person):
    def __init__(self, email, password):
        super().__init__(email, password)

class Seller(Person):
    def __init__(self, email, password):
        super().__init__(email, password)

