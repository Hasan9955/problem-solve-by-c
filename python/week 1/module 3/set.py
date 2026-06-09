# list --> []
# tuple --> ()
# set --> {}
# set: unique items collection
numbers = [12, 45, 55, 78, 96, 85, 45, 22]
print(numbers)
number_set = set(numbers)
number_set.add(5)
if 45 in number_set:
    number_set.remove(45)
print(number_set)

for item in number_set:
    print(item)
print(len(number_set))

A = {1, 2, 5}
B = {1, 5, 8, 7}

print(A & B)
print(A | B)
number_set.pop()
print(number_set)