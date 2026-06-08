# N. Check Code
# time limit per test1 second
# memory limit per test256 megabytes
# Given two numbers A, B and a code S consisting of digits (0,1,2,...,9) and a symbol '-'.

# Determine if the code follows the following rules or not:

# The position A + 1 in the code is the symbol '-'.
# All other characters are one of the following digits: (0,1,2,...,9).
# Input
# First line contains two numbers A, B (1 ≤ A, B ≤ 10).

# Second line contains S (|S| = A + B + 1) and consists of '-' and digits from 0 through 9.

# Output
# Print "Yes" if the code S follows the above rules otherwise, print "No".

# Examples
# InputCopy
# 3 3
# 269-665
# OutputCopy
# Yes
# InputCopy
# 1 1
# 12-
# OutputCopy
# No
# InputCopy
# 1 2
# 7444
# OutputCopy
# No
# Note
# First example:

# The (A+1)-th character of code is '-', and the other characters are digits from '0' through '9', so it follows the format.




a, b = map(int, input().split()) 

str = input()
 
if len(str) != a + b + 1:
    print("No")
else:
    if str[a] != '-':
        print("No")
    else:
        valid = True
        for i in range(len(str)):
            if i != a:
                if not str[i].isdigit():
                    valid = False
                    break
        print("Yes" if valid else "No")