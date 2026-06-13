


class Company:
    def __init__(self, name, address, owner):
        self.name = name 
        self.address = address
        self.owner = owner
        self.bus = []
        self.manager = []
        self.supervisor = []

    
class Driver:
    def __init__(self, name, license, age):
        self.license = license
        self.name = name
        self.age = age



class Counter:
    def __init__(self):
        pass
    def purchase_a_ticket(self, start, destination):
        pass


class Passenger:
    pass