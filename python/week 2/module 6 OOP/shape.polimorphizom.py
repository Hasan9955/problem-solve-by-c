from math import pi

class Shape:
    def __init__(self, name):
        self.name = name

    
class Rectangle(Shape):
    def __init__(self, name, length, width):
        self.length = length
        self.width = width
        super().__init__(name)

    def area(self):
        return self.length * self.width
    
class Circle(Shape):

    def __init__(self, name, radius):
        self.radius = radius
        super().__init__(name)

    def area(self):
        return pi * self.radius * self.radius
    

rectangle1 = Rectangle("Rectangle1", 5, 10)
circle1 = Circle("Circle1", 5.7)

print("Area of Rectangle: ", rectangle1.area())
print("Area of Circle: ", circle1.area())