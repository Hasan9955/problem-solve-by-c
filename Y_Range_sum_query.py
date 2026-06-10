# Y. Range sum query
# time limit per test1.5 seconds
# memory limit per test256 megabytes
# Given 2 numbers N
#  and Q
# , an array A
#  of N
#  number and Q
#  number of pairs L
# , R
# . For each query Q
#  print a single line that contains the summation of all numbers from index L
#  to index R
# .

# Input
# First line contains two numbers N
# , Q
#  (1≤N,Q≤105)
#  where N
#  is number of elements in A
#  and Q
#  is number of query pairs.

# Second line contains N
#  numbers(1≤Ai≤109)
# .

# Next Q
#  lines contains L,R
#  (1≤L≤R≤N)
# .

# Output
# For each query Q
#  print a single line that contains the summation of all numbers from index L
#  to index R
# .

# Examples
# InputCopy
# 6 3
# 6 4 2 7 2 7
# 1 3
# 3 6
# 1 6
# OutputCopy
# 12
# 18
# 28
# InputCopy
# 4 3
# 5 5 2 3
# 1 3
# 2 3
# 1 4
# OutputCopy
# 12
# 7
# 15


"""

# this will not work as time complexity high
N, Q= map(int, input().split())

arr = list(map(int, input().split()))[:N]

for i in range(Q):
    l, r = map(int, input().split())
    total = sum(arr[l-1:r])
    print(total)

"""
from itertools import accumulate

N, Q= map(int, input().split())

arr = list(map(int, input().split()))[:N]

prefix = [0] + list(accumulate(arr))

# print(prefix)

for i in range(Q):
    l, r = map(int, input().split())
    print(prefix[r] - prefix[l - 1])

