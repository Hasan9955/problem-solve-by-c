# base class, parent class, common attribute + functionality class
# derived class, child class, uncommon attribute + functionality


class Gadget:
    def __init__(self, brand, price, color, origin):
        self.brand = brand
        self.price = price 
        self.color = color
        self.origin = origin
    
    def run(self):
        return f"Running device"

class Laptop:
    def __init__(self, memory, ssd):
        self.ssd = ssd
        self.memory = memory
 

    def coding(self):
        return f"Learning python and practicing"

class Phone(Gadget):
    def __init__(self, brand, price, color, origin, dual_sim):
        self.dual_sim = dual_sim
        super().__init__(brand, price, color, origin)

 
    
    def phone_call(self, number):
        return f"Sending SMS to: {number}"
    
    def __repr__(self):
        return f"Phone: {self.brand}, price: {self.price}, color: {self.color}. Is the mobile support dual sim: {self.dual_sim}"
    

class Camera:
    def __init__(self, pixel):
        
        self.pixel = pixel
 
    def change_lens(self):
        pass



# inheritance

my_phone = Phone("Samsung", 120000, "BLACK", "CHINA", True)
print(my_phone)