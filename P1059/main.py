n = int(input())
point = [0] * 1000
num = 0
ranN = list(map(int, input().split()))

for i in range (n):
    point[ranN[i]] = 1

for i in range (len(point)):
    num += point[i]

print (num)

for i in range (len(point)):
    if point[i] == 1:
        print (i, end=' ')
