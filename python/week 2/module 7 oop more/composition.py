

class Engine:
    def __init__(self):
        pass


    def start(self):
        return "engine started"
    
class Driver:
    def __init__(self):
        pass


class Car:
    def __init__(self):
        self.engine = Engine()
        self.driver = Driver()

    def start(self):
        print(self.engine.start())
        print(self.driver.start())