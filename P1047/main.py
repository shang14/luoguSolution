roadL, m = map(int,input().split())
tree = 0
startN = [None] * m
finN = [None] * m
treeN = [None] * (roadL + 1)

for i in range (m):
    startN[i], finN[i] = map(int,input().split())

for i in range  (roadL + 1):
    treeN[i] = 1

for i in range (m):
    while startN[i] <= finN[i]:
        treeN[startN[i]] = 0
        startN[i] += 1

for i in range (roadL + 1):
    tree += treeN[i]

print(tree)
