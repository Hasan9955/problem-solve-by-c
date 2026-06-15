from abc import ABC, abstractmethod

class Shape(ABC):

    @abstractmethod
    def area(self):
        pass

    @abstractmethod
    def perimeter(self):
        pass



class circle(Shape):
    def __init__(self, radius):
        self.radius = radius

    
    def area(self):
        return 3.1416 * self.radius * self.radius
    
    def perimeter(self):
        return 2 * 3.1416 * self.radius
    


class Rectangle(Shape):
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def area(self):
        return self.length * self.width

    def perimeter(self):
        return 2 * (self.length + self.width)
    

circle1 = circle(5)
rectangle1 = Rectangle(5, 10)

print(circle1.area())
print(circle1.perimeter())
print(rectangle1.area())
print(rectangle1.perimeter())