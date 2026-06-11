# M. Replace MinMax
# time limit per test1 second
# memory limit per test256 megabytes
# Given a number N and an array A of N numbers. Print the array after doing the following operations:

# Find minimum number in these numbers.
# Find maximum number in these numbers.
# Swap minimum number with maximum number.
# Input
# First line contains a number N (2 ≤ N ≤ 1000) number of elements.

# Second line contains N numbers ( - 105 ≤ Ai ≤ 105)

# It's guaranteed that all numbers are distinct.

# Output
# Print the array after the replacement operation.

# Example
# InputCopy
# 5
# 4 1 3 10 8
# OutputCopy
# 4 10 3 1 8 



num = int(input())

arr = list(map(int, input().split()))[:num]

max_ind = arr.index(max(arr))
min_ind = arr.index(min(arr))


arr[max_ind], arr[min_ind] = arr[min_ind], arr[max_ind]
print(*arr)

