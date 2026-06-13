
class Student:

    def __init__(self, name, id, currentClass):
        self.name = name 
        self.id = id
        self.currentClass = currentClass

    def __repr__(self):
        return f'Student with name: {self.name}, class: {self.currentClass} and id: {self.id}'


class Teacher:

    def __init__(self, name, subject, id):
        self.name = name
        self.subject = subject
        self.id = id
        
    def __repr__(self):
        return f"Teacher: {self.name}, subject: {self.subject}, id: {self.id}"
    

class School:
    def __init__(self, name) -> None:
        self.name = name
        self.students = []
        self.teachers = [] 

    def add_teacher(self, name, subject):
        id = len(self.teachers) + 101
        teacher = Teacher(name, subject, id)
        self.teachers.append(teacher)
    
    def enroll(self, name, fee):
        if fee < 6500:
            return "Not enough fee"
        else:
            id = len(self.students) + 1
            student = Student(name, id, "O")
            self.students.append(student)
            return f"{name} is enrolled with id: {id}, extra money {fee - 6500}"

    def __repr__(self):
        print("welcome to ", self.name)
        print("----------OUR TEACHER---------------")
        for teacher in self.teachers:
            print(teacher)
        print("-----------OUR STUDENTS-------------")
        for student in self.students:
            print(student)
        
        return "All Done"


# hasan = Student("Hasan Bin Ali", 10, 7)

# jahid = Teacher("Jahid", "Math", 310)

# print(hasan)
# print(jahid)


phitron = School("Phitron")

phitron.enroll("Hasan", 5000)
phitron.enroll("Robin", 7000)
phitron.enroll("Abdullah", 12000)
phitron.enroll("Anas", 9000)


phitron.add_teacher("Habib", "DSA")
phitron.add_teacher("Jankar", "Python")
phitron.add_teacher("Musfik", "C++")


print(phitron)
