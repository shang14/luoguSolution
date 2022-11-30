balance = 0
deposit = 0
amount = [None] * 12
for i in range(12):
    amount[i] = int(input())

for i in range(12):
    balance = balance + 300 - amount[i]
    if (balance >= 0):
        deposit += balance - balance % 100
        balance %= 100
    else:
        print(-(i+1))
        break

if (balance >= 0):
    print(int(deposit*1.2 + balance))
