hour = [None] * 2
week = [hour] * 7
happiness =[0] * 7
index = 0
max = happiness[0]
happy = True

for i in range (7):
    week[i] = list(map(int, input().split()))

for i in range (7):
    happiness[i] = week[i][0] + week[i][1]

for i in range (7):
    if happiness[i] > max :
        max = happiness[i]
        index = i

if max > 8 :
    print(index + 1)
    happy == False
elif happy == True:
    print(0)

