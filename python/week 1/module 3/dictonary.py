

numbers = [12, 45, 78, 96, 85 , 45, 77, 12, 45 , 63]

person = ["Hasan", "Gozaria", "Bin", "Student", "Ali"]

person = {'name': "Hasan Bin Ali", 'address': "Gozaria", 'age': 22, 'job': 'Developer'}

print(person)
# print(type(person))

print(person['job'])
print(person.keys())
print(person.values())
person['language'] = 'python'
person['name'] = 'HBA'
print(person)


for k, v in person.items():
    print(k, ':', v)