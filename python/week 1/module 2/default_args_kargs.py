

def all_sum(number):
    print(number)
    sum = 0
    for num in number:
        sum += num
        # print(num)
    return sum


all_num = []
while True:
    num = int(input())
    if(num == -1):
        break
    all_num.append(num)


total = all_sum(all_num)
print("Sum of all numbers: ", total)