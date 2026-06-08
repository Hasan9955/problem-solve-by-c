


# def fib(n):
#     if n == 1:
#         return 0
#     elif n == 2: 
#         return 1
#     else:
#         return fib(n - 1) + fib(n - 2)

num = int(input())
# print(fib(num))


if num == 1:
    print(0)
elif num == 2:
    print(1)
else:
    a, b = 0, 1;
    for i in range(3, num + 1):
        c = a + b
        a, b = b, c
    print(b)



