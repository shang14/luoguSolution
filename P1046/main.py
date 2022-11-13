appleT = list(map(int, input().split()))
taotao = int(input())
n = 0

for i in appleT:
    if i <= (taotao + 30) :
        n += 1
    
print (n)
