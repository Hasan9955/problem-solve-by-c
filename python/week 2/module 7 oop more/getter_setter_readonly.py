
class User:
    def __init__(self, name, age, money):
        self._name = name
        self._age = age
        self.__money = money

    # example of getter

    @property
    def age(self):
        return self._age
    
    # example of getter
    @property
    def salary(self):
        return self.__money
    
    @salary.setter
    def salary(self, value):
        if value < 0:
            return 'salary can not be negative'
        self.__money += value


samsu = User("samsu", 20, 80000)

# print(samsu.__money)
# print(samsu._age)
print(samsu.age)
samsu.salary = 5000
print(samsu.salary)