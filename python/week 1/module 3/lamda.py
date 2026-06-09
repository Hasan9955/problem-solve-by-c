
# def double(x):
#     return x * 2

double = lambda num : num * 2
squared = lambda num: num**2

result = double(4)
resSquard = squared(4)
print(result, resSquard)


add = lambda a, b: a+b
sum = add(5, 2)

print(sum)


numbers = [12, 45, 55, 78, 96, 85, 45, 22]
# double_nums = map(double, numbers)
double_nums = map(lambda x : x * 2, numbers)
square_num = map(lambda x: x**2, numbers)
print(numbers)
print(list(double_nums))
print(list(square_num))


students = [
    {'name': 'hasan', 'mark': 80},
    {'name': 'anas', 'mark': 40},
    {'name': 'papaya', 'mark': 50},
    {'name': 'rana', 'mark': 70},
    {'name': 'abdullah', 'mark': 60},
    {'name': 'tahura', 'mark': 90},
]


lowestMark = filter(lambda students : students['mark'] <= 60, students)
heightsMark = filter(lambda students: students['mark'] >= 80, students)
print(list(lowestMark))
print(list(heightsMark))