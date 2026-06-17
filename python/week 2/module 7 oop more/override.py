
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

    def eat(self):
        print("vegetables and fruits")

    def exercise(self):
        print("playing cricket")



sakib = Cricketer("sakib", 33, 5.8, 70, "bangladesh")

sakib.eat()
sakib.exercise()