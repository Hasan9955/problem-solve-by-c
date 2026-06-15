from abc import ABC, abstractmethod
# abstruct base class and abstruct method

class Animal(ABC):
    def __init__(self, name, food):
        self.name = name 
        self.food = food

    @abstractmethod
    def eat(self):
        pass
        # print(f"I am eating {self.food}")

    @abstractmethod
    def sleep(self):
        pass

class Monkey(Animal):
    def __init__(self, name, food):
        super().__init__(name, food)

    def eat(self):
        print(f"I am eating {self.food}")

    def sleep(self):
        print("I am sleeping for 8 hours")


lucky = Monkey("lucky", "banana")
lucky.eat()
lucky.sleep()