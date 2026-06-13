
class Phone:
    manufactured = "china"

    def __init__(self, owner, brand, price):
        self.owner = owner
        self.brand = brand
        self.price = price
        
        

    def send_sms(self, phone, sms):
        text = f"sending to : {phone} {sms}"
        print(text)


hasanPhone = Phone("Hasan", "Redmi", 20000)
AliPhone = Phone("Ali", "Vivo", 30000)
anasPhone = Phone("Anas", "Apple", 150000)

print(f"{hasanPhone.owner}'s phone. Brand is {hasanPhone.brand} and price is {hasanPhone.price}")
print(f"{anasPhone.owner}'s phone. Brand is {anasPhone.brand} and price is {anasPhone.price}")