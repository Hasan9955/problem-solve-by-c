
array = [80, 78, 44, 66, 50, 20, 44, 83, 55]

while True:
    num = int(input())
    if(num == -1):
        break
    array.append(num)

highest = max(array)
smallest = min(array)
count = len(array)

print("Highest value is:", highest)
print("Smallest value is:", smallest)
print("Total len of array:", count)

