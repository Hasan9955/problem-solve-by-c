import random
from school import School


class Person:
    def __init__(self, name):
        self.name = name 
    

class Teacher(Person):
    def __init__(self, name):
        super().__init__(name)


    def evaluate_exam(self):
        return random.randint(40, 100)
    

class Student(Person):
    def __init__(self, name, classroom):
        super().__init__(name)
        self.classroom = classroom

        self.__id = None
        self.marks = {} # {"eng": 78}

        self.subject_grade = {} # {"eng": "A"}

        self.grade = None #final grade

    def final_grade(self):


        # if not self.marks:
        #     return None
        
        # total_points = 0
        # for subject, marks in self.marks.items():
        #     grade = School.calculate_grade(marks)
        #     self.subject_grade[subject] = grade
        #     total_points += School.grade_to_value(grade)

        # average_gpa = total_points / len(self.marks)
        # self.grade = School.value_to_grade(average_gpa)

        # return self.grade


        sum = 0
        for grade in self.subject_grade.values():
            point = School.grade_to_value(grade)
            sum += point 

        if len(self.subject_grade) == 0:
            gpa = 0 
        else:
            gpa = sum / len(self.subject_grade)
            
        self.grade = School.value_to_grade(gpa)
        return self.grade

    @property
    def id(self):
        return self.__id
    
    @id.setter
    def id(self, value):
        self.__id = value
    
