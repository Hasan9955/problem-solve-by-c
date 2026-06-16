# poly --> many (multiple)
# morph --> shape (form)

class Animal:
    def __init__(self, name):
        self.name = name

    def make_sound (self):
        print("Animal is making a sound")
    

class Cat(Animal):
    def __init__(self, name):
        super().__init__(name)

    def make_sound(self):
        print("Meow meow")
    

class Dog(Animal):
    def __init__(self, name):
        super().__init__(name)

    def make_sound(self):
        print("Gheu Gheu")
    
class Goat(Animal):
    def __init__(self, name):
        super().__init__(name)

    def make_sound(self):
        print("Mee Mee")


coco = Cat("coco")
coco.make_sound()

shepard = Dog("shepard")
shepard.make_sound()


mess = Goat("mess")
mess.make_sound()

less = Goat("gora gori")

animals = [coco, shepard, mess, less]

for animal in animals:
    animal.make_sound()