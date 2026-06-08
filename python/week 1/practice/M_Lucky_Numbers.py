

# num1 = int(input())
# num2 = int(input())
num1, num2 = map(int, input().split())


array = []

for i in range(num1, num2 + 1):

#  is_lucky = True

# for digit in str(i):
#     if digit not in '47':
#         is_lucky = False

# if is_lucky:
#     array.append(i)   
    if all(ch in '47' for ch in str(i)):
        array.append(i)


if len(array) == 0:
    print(-1)
else:
    print(' '.join(map(str, array)))
