
numbers = [12, 45, 56, 33, 44]

numbers.append(600)

print(numbers)

numbers.insert(4, 55)

print(numbers)

if 60 in numbers:
    numbers.remove(60)
print(numbers)

last = numbers.pop(2)
print(last)
print(numbers)

if 45 in numbers:
    index = numbers.index(45)
print(index)


sorted = numbers.sort()
print(numbers)

numbers.reverse()
print(numbers)