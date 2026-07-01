

class School:
    def __init__(self, name, address):
        self.name = name 
        self.address = address
        self.teachers = {}
        self.classrooms = {}


    def add_classroom(self, classroom):
        self.classrooms[classroom.name] = classroom

    def add_teacher(self, subject, teacher):
        self.teachers[subject] = teacher
        print(self.teachers)

    def student_admission(self, student, classroom_name):
        if classroom_name in self.classrooms:
            self.classrooms[classroom_name].add_student(student)
            student.classroom = self.classrooms[classroom_name]
            print(f"{student.name} has been admitted to {classroom_name}")
        else:
            print(f"Classroom {classroom_name} does not exist")
        
    @staticmethod
    def calculate_grade(marks):
        if marks >= 90:
            return "A"
        elif marks >= 80:
            return "B"
        elif marks >= 70:
            return "C"
        elif marks >= 60:
            return "D"
        else:
            return "F"

    @staticmethod
    def grade_to_value(grade): 
        grade_map = {
            'A': 4.0,
            'B': 3.0,
            'C': 2.0,
            'D': 1.0,
            'F': 0.0
        }
        return grade_map.get(grade, 0.0)

    @staticmethod
    def value_to_grade(value):
        if value >= 4.0:
            return "A"
        elif value >= 3.0:
            return "B"
        elif value >= 2.0:
            return "C"
        elif value >= 1.0:
            return "D"
        else:
            return "F"

    def __repr__(self):
        """String representation of the school."""
        result = f"\n{'='*50}\n"
        result += f"SCHOOL: {self.name}\n"
        result += f"Address: {self.address}\n"
        result += f"{'='*50}\n"
        
        for classroom_name, classroom in self.classrooms.items():
            result += f"\n📚 CLASSROOM: {classroom_name}\n"
            result += f"{'-'*30}\n"
            
            if classroom.students:
                for student in classroom.students:
                    result += f"\n👨‍🎓 Student: {student.name} (ID: {student.id})\n"
                    if student.marks:
                        result += "  📊 Marks:\n"
                        for subject, marks in student.marks.items():
                            grade = student.subject_grades.get(subject, 'N/A')
                            result += f"    - {subject}: {marks} → Grade: {grade}\n"
                        result += f"  🏆 Final Grade: {student.grade}\n"
                    else:
                        result += "  No marks recorded yet\n"
            else:
                result += "  No students enrolled\n"
        
        return result



class ClassRoom:
    def __init__(self, name):
        self.name = name
        self.students = []
        self.subjects = []

    def add_student(self, student):
        if student not in self.students:
            self.students.append(student)
            student.classroom = self
            print(f"{student.name} has been added to {self.name}")

    def add_subject(self, subject):
        self.subjects.append(subject)

    def take_semester_final(self):
        if not self.subjects:
            print("No subjects assigned to this classroom.")
            return
        
        print(f"\n🎯 Conducting Semester Finals for {self.name}")
        print(f"{'='*40}")

        for subject in self.subjects:
            print(f"\n Subject: {subject.name}")
            print(f" Teacher: {subject.teacher.name}")
            subject.exam(self.students)

        # Calculate final grades after all exams
        for student in self.students:
            student.calculate_final_grade()

        
    def get_top_students(self, n=3):
        if not self.students:
            return []
        
        student_values = []

        for student in self.students:
            if student.grade:
                value = School.grade_to_value(student.grade)
            else:
                value = 0

            student_values.append((student, value))

        student_values.sort(key=lambda item: item[1], reverse=True)

        sorted_students = []

        for student, value in student_values:
            sorted_students.append(student)

        return sorted_students[:n]


        # if not self.students:
        #     return []
        
        # sorted_students = sorted(
        #     self.students,
        #     key=lambda s: School.grade_to_value(s.grade) if s.grade else 0,
        #     reverse = True
        # )
        # return sorted_students[:n]

class Subject:
    def __init__(self, name, teacher, max_marks=100, pass_marks=40):
        self.name = name
        self.teacher = teacher
        self.max_marks = max_marks
        self.pass_marks = pass_marks

    def exam(self, students):
        for student in students:
            marks = self.teacher.evaluate_exam()
            print("marks", marks)
            student.marks[self.name] = marks
            # grade = School.calculate_grade(marks)
            grade = School.calculate_grade(marks)
            student.subject_grades[self.name] = grade
        print(f"\n{self.name} Exam Conducted Successfully")


class Person:
    def __init__(self, name):
        self.name = name 

import random 

class Teacher(Person):
    def __init__(self, name):
        super().__init__(name)

    def teach(self):
        print(f"{self.name} is teaching.......")

    def evaluate_exam(self):
        return random.randint(0, 100)
 
class Student(Person):
    def __init__(self, name):
        super().__init__(name)
        self._id = None 
        self.classroom = None
        self.marks = {}
        self.subject_grades = {}
        self.grade = None

   

    @property
    def id(self):
        """Getter for student ID"""
        return self._id
    
    @id.setter
    def id(self, value):
        """Setter for student ID"""
        self._id = value
    
    def calculate_final_grade(self):
        
        if not self.marks:
            return None
        
        total_points = 0
        for subject, marks in self.marks.items():
            grade = School.calculate_grade(marks)
            self.subject_grades[subject] = grade
            total_points += School.grade_to_value(grade)

        average_gpa = total_points / len(self.marks)
        self.grade = School.value_to_grade(average_gpa)

        return self.grade
    


# Create School
school = School("Springfield High School", "742 Evergreen Terrace")

# Create Teachers
teacher1 = Teacher("Mr. Burns")
teacher2 = Teacher("Mrs. Simpson")
teacher3 = Teacher("Mr. Skinner")

# Create Subjects
math = Subject("Mathematics", teacher1, 100, 40)
science = Subject("Science", teacher2, 100, 40)
english = Subject("English", teacher3, 100, 40)

# Create Classroom
class_10a = ClassRoom("Class 10A")
class_10a.add_subject(math)
class_10a.add_subject(science)
class_10a.add_subject(english)

# Add Classroom to School
school.add_classroom(class_10a)

# Add Teachers to School
school.add_teacher("Mathematics", teacher1)
school.add_teacher("Science", teacher2)
school.add_teacher("English", teacher3)

# Create Students
student1 = Student("Bart Simpson")
student1.id = "S1001"

student2 = Student("Lisa Simpson")
student2.id = "S1002"

student3 = Student("Milhouse Van Houten")
student3.id = "S1003"

# Admit Students
school.student_admission(student1, "Class 10A")
school.student_admission(student2, "Class 10A")
school.student_admission(student3, "Class 10A")

# Conduct Semester Finals
class_10a.take_semester_final()

# Display School Information
print(school)