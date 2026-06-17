

# print(45+85)
# print("Hasan " + "ALI")

# print([12, 88] + [45, 66, 434])



class Person:
    def __init__(self, name, age, height, weight):
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight

    def eat(self):
        print("vat mangso pulaw korma")

    def exercise(self):
        raise NotImplementedError


class Cricketer(Person):

    def __init__(self, name, age, height, weight, team):
        self.team = team
        super().__init__(name, age, height, weight)

    # overriding
    def eat(self):
        print("vegetables and fruits")

    def exercise(self):
        print("playing cricket")

    # overloading add
    def __add__(self, other):
        return self.age + other.age
    
    # overloading multiply
    def __mul__(self, other):
        return self.weight * other.weight
    
    # overloading len
    def __len__(self):
        return self.age
    
    # overloading greater than
    def __gt__(self, other):
        return self.age > other.age



sakib = Cricketer("sakib", 33, 5.8, 70, "bangladesh")
murkil = Cricketer("murkil", 33, 5.8, 70, "bangladesh")
# sakib.eat()
# sakib.exercise()

print(sakib + murkil)
print(sakib * murkil)
print(len(sakib))
print(sakib > murkil)