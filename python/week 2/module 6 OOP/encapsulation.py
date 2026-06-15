
class Bank:
    def __init__(self, holder_name, initial_deposit):
        self.holder_name = holder_name 
        self._branch = "Mirpur"
        # self.initial_deposit = initial_deposit
        self.__balance = initial_deposit

    def get_balance(self):
        return self.__balance
    
    def deposit(self, amount):
        self.__balance += amount
    
    def withdraw(self, amount):
        self.__balance -= amount



rafsun = Bank("Rafsun", 5000)

print(rafsun.holder_name) 
print(rafsun._branch)
rafsun.deposit(22222)
rafsun.withdraw(5000)

print(rafsun.get_balance())



# class Bank:
#     def __init__(self, holder_name, initial_deposit):
#         self.holder_name = holder_name
#         self.__balance = initial_deposit  # Actually becomes _Bank__balance

# rafsun = Bank("Rafsun", 5000)

# # This doesn't access the private variable
# rafsun.__balance = 0  # Creates a NEW attribute called __balance

# # These are two DIFFERENT variables:
# print(rafsun.__balance)        # 0 (the new public attribute)
# print(rafsun._Bank__balance)   # 5000 (the actual private variable)