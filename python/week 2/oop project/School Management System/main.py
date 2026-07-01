from school import School
from person import Person, Student, Teacher
from subject import Subject
from classroom import Classroom


school = School(name="Chhagalnaiya Academy", address="Feni")

eight = Classroom("Eight")
nine = Classroom("Nine")
ten = Classroom("Ten")


school.add_classroom(eight)
school.add_classroom(nine)
school.add_classroom(ten)


# Adding students

rahim = Student("Rahim", eight)
labib = Student("Labib", nine)
fahim = Student("Fahim", ten)
hasan = Student("Hasan", nine)


school.student_admission(rahim)
school.student_admission(labib)
school.student_admission(fahim)
school.student_admission(hasan)


# Adding Teachers

abul = Teacher("Abul Khan")
ahad = Teacher("Ahad Khan")
roni = Teacher("Roni khan")


school.add_teacher("Bangla", abul)
school.add_teacher("Physics", ahad)
school.add_teacher("Math", roni)


# adding subject 
bangla = Subject("Bangla", abul)
physics = Subject("Physics", ahad)
math = Subject("Math", roni)
biology = Subject("Biology", abul)

eight.add_subject(bangla)
eight.add_subject(math)
eight.add_subject(physics)

nine.add_subject(bangla)
nine.add_subject(math)
nine.add_subject(biology)

ten.add_subject(bangla)
ten.add_subject(biology)
ten.add_subject(math)
ten.add_subject(physics)

eight.take_semester_final_exam()
nine.take_semester_final_exam()
ten.take_semester_final_exam()

print(school)