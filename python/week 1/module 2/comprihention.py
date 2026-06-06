

numbers = [40, 50, 60, 70, 35, 44, 43, 33, 34, 23, 56]

odds = []

for num in numbers:
    if num % 2 == 1 and num % 5 == 0:
        odds.append(num)

print(odds)

odds_nums = [num for num in numbers if num % 2 == 1 and num % 5 == 0]
print(odds_nums)