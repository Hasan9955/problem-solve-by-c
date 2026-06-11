# G. Palindrome Array
# time limit per test1 second
# memory limit per test256 megabytes
# Given a number N
#  and an array A
#  of N
#  numbers. Determine if it's palindrome or not.

# Note:

# An array is called palindrome if it reads the same backward and forward, for example, arrays { 1 } and { 1,2,3,2,1 } are palindromes, while arrays { 1,12 } and { 4,7,5,4 } are not.

# Input
# First line contains a number N
#  (1≤N≤105)
#  number of elements.

# Second line contains N
#  numbers (1≤Ai≤109)
# .

# Output
# Print "YES" (without quotes) if A is a palindrome array, otherwise, print "NO" (without quotes).

# Examples
# InputCopy
# 5
# 1 3 2 3 1
# OutputCopy
# YES
# InputCopy
# 4
# 1 2 3 4
# OutputCopy
# NO

"""

num = int(input())

arr = list(map(int, input().split()))[:num]
 
# revArr = arr[::-1]

# print(arr, revArr)
startInd = 0
revInd = -1
flag = False
while startInd != num:
    # print(startInd, revInd)
    # print(arr[startInd], arr[revInd])
    if arr[startInd] != arr[revInd]:
        flag = True
        break
    startInd += 1
    revInd -= 1

if flag:
    print("NO")
else:
    print("YES")

"""



"""

num = int(input())
arr = list(map(int, input().split()))[:num]

startInd = 0
endInd = num - 1
isPalindrome = True

while startInd < endInd:
    if arr[startInd] != arr[endInd]:
        isPalindrome = False
        break
    startInd += 1
    endInd -= 1

if isPalindrome:
    print("YES")
else:
    print("NO")

"""


num = int(input())

arr = list(map(int, input().split()))[:num]
 
 
if arr == arr[::-1]:
    print("YES")
else: 
    print("NO")