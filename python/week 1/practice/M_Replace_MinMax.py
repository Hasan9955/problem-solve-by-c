
num = int(input())

arr = list(map(int, input().split()))[:num]
 

maxInd = arr.index(max(arr))
minInd = arr.index(min(arr))

toggle = arr[maxInd] 
arr[maxInd] = arr[minInd]
arr[minInd] = toggle

print(*arr)