# inheritance vs composition
# Answer: Composition is better than inheritance in this case because it is more flexible and easier to modify. Inheritance is more rigid and less flexible. 


class Cpu:

    def __init__ (self, cores):
        self.cores = cores

class RAM: 
    def __init__ (self, size):
        self.size = size

class HardDrive:
    def __init__ (self, size):
        self.size = size



class Computer:

    def __init__ (self, cores, ramSize, hard_drive_size):
        self.cpu = Cpu(cores)
        self.ram = RAM(ramSize)
        self.hard = HardDrive(hard_drive_size)