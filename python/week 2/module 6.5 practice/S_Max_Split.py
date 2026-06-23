# S. Max Split
# time limit per test1 second
# memory limit per test256 megabytes
# Given a balanced string S
#  consists of ['R', 'L'] characters. Split it into maximum number of strings such that the new strings are also balanced.

# Note:

# Balanced strings are those who have equal quantities of 'L' and 'R' characters.
# You can not remove or reorder the characters while making the new strings.
# Input
# Only one line contains a string S
#  (2≤|S|≤1000)
#  where |S| is the length of the string.

# It's guaranteed that S
#  consists of only ['L', 'R'] letters, S
#  is balanced and |S|
#  is even.

# Output
# Print maximum number of balanced strings then the balanced strings in any order.

# Examples
# InputCopy
# LLRRLLLRRR
# OutputCopy
# 2
# LLRR
# LLLRRR
# InputCopy
# LLLRRR
# OutputCopy
# 1
# LLLRRR



str = input()


result = []
count = 0
current = ""


for ch in str:
    current += ch

    if ch == 'L':
        count += 1
    else:
        count -= 1

    if count == 0:
        result.append(current)
        current = ""


print(len(result))

for item in result:
    print(item)

