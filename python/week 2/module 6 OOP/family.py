

class Family:
    def __init__(self, address):
        self.address = address

    

class School:
    def __init__(self, id, level):
        self.id = id 
        self.level = level

class Sports:
    def __init__(self, game):
        self.game = game 


class Student(Family, School, Sports):
    def __init__(self, name, address, id, level, game):
        self.name = name
        School.__init__(self, id, level)
        Sports.__init__(self, game)
        Family.__init__(self, address)

    def __repr__(self):
        return f"My name is {self.name}. I live in {self.address}. I read in {self.level} level. My Id is {self.id}. And I love to play {self.game}"


hasan = Student("Hasan", "Feni", 11, "O", "Football")

print(hasan)