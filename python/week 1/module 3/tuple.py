
def multiple():
    return 3, 4

# print(type(multiple()))

tuple = "phone", "pc", "mouse", "bottle", "plant", "glass", "egg"

# print(type(tuple))
# print(tuple)
# print(tuple[2])
# print(tuple[-2])
# print(tuple[::-1])
# print(tuple[::1])
# print(tuple[1:])
# print(tuple[1:10:1])
# print(tuple[0:5:2])
# print(tuple[0:7:2])
# print(tuple[-1:-7:-2])



print(len(tuple))

if 'phone' in tuple:
    print("exists")
for item in tuple:
    print(item) 

print(*tuple)