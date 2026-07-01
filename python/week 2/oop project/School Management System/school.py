

class School:
    def __init__(self, name, address) -> None:
        self.name = name
        self.address = address
        self.teachers = {} # {"bangla": teacher_Object}
        self.classrooms = {} # {"eight": classroom_object }


    def add_classroom(self, classroom):
        self.classrooms[classroom.name] = classroom

    def add_teacher(self, subject, teacher):
        self.teachers[subject] = teacher
    
    def student_admission(self, student):
        pass


    @staticmethod
    def calculate_grade(marks):
        if marks >= 80 and marks <= 100:
            return "A+"
        elif marks >= 70 and marks < 80:
            return "A"
        elif marks >= 60 and marks < 70:
            return "A-"
        elif marks >= 50 and marks < 60:
            return "B"
        elif marks >= 40 and marks < 50:
            return "C"
        elif marks >= 33 and marks < 40:
            return "D"
        else: 
            return "F"
        
    @staticmethod
    def grade_to_value(grade):
        grades = {
            "A+": 5.00,
            "A": 4.00,
            "A-": 3.50,
            "B": 3.00,
            "C": 2.00,
            "D": 1.00,
            "F": 0.00
        }

        # Color constants
        COLOR_RED = "\033[91m"
        COLOR_RESET = "\033[0m"

        if grade in grades:
            return grades[grade]
        else:
            return f"{COLOR_RED}{grade} Invalid value given!{COLOR_RESET}"

    @staticmethod
    def value_to_grade(value):
        if value >= 4.5 and value <= 5.00:
            return "A+"
        elif value >= 3.5 and value < 4.50:
            return "A"
        elif value >= 3.0 and value < 3.5:
            return "A-"
        elif value >= 2.5 and value < 3.0:
            return "B"
        elif value >= 2.0 and value  < 2.5:
            return "C"
        elif value >= 1.0 and value < 2.0:
            return "D"
        else:
            return "F"

    def __repr__(self):
        # All classrooms
        # All Students
        # All Teachers
        # All Student Results
        pass

academy = School(name="Chhagalnaiya Academy", address="Feni")

print(academy.grade_to_value("A"))