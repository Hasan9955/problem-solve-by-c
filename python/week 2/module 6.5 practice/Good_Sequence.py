from collections import Counter

num = int(input())


arr = list(map(int, input().split()))


frq = Counter(arr)

# print(frq)

removals = 0

for x, f in frq.items():
    # print(x, f)
    if f < x: 
        removals += f 
    else:
        removals += f - x

print(removals)