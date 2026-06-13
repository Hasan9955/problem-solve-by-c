

class Bank:


    def __init__(self, balance):
        self.balance = balance
        self.min_withdraw = 100
        self.max_withdraw = 100000


    def get_balance(self):
        print(f"You Balance: {self.balance}")
    

    def deposit(self, amount):
        if amount > 0:
            self.balance += amount
        
    def withdraw(self, amount):
        if amount < self.min_withdraw:
            print(f"You can not withdraw bellow {self.min_withdraw}")
        
        elif amount > self.max_withdraw:
            print(f"You can not withdraw more than {self.max_withdraw}")
        
        elif amount > self.balance:
            print(f"You have not enough money. Balance: {self.get_balance()}")
        
        else:
            self.balance -= amount
            print(f"Here is you money {amount}")
            print(f"you balance after withdraw {self.get_balance()}")
        



islami_bank = Bank(50000)
islami_bank.withdraw(25)
islami_bank.withdraw(100001)
islami_bank.withdraw(50001)
islami_bank.withdraw(10000)


print('\n\n')
dbbl = Bank(5000)

dbbl.deposit(2000)
dbbl.deposit(10)
dbbl.get_balance()