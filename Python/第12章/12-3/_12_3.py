
day = int(0)

# 先製作一個LIST
dates = []

for i in range(5):
    dates.append([])
    for j in range(4):
        dates[i].append([])
        for k in range(4):
            dates[i][j].append([])

# first , 每個相隔 2 

start = int(1)
for i in range(4):
    for j in range(4):
        dates[0][i][j] = start
        start+=2

# sencond , +1, +3, +1, +3
start = int(2)
for i in range(4):
    for j in range(4):
        dates[1][i][j] = start
        if j%2 ==0:
            start += 1
        else:
            start+=3

# third, +5 when meet endl
start = int(4)
for i in range(4):
    for j in range(4):
        dates[2][i][j] = start
        start +=1
    start += 4 # end line to add 5 

# forth, +9 when meet endl twice 
start = int(8)
for i in range(4):
    for j in range(4):
        dates[3][i][j] = start
        start +=1
    if i == 1:
        start += 8 # add 9 when end line twice

#fifth, plus 1
start = int(16)
for i in range(4):
    for j in range(4):
        dates[4][i][j] = start
        start+=1

for i in range(5):
    print("Is your birthday in Set %d ?"%int(i+1))
    for j in range(4):
        for k in range(4):
            print(dates[i][j][k], end=" ")
        print()
    print("\n Enter N for No and Y for Yes:")
    answer = input()
    if(answer == "Y" ):
        day += dates[i][0][0]

print("Your birthday is %d"%day)

''' 輸出測試
for i in range(5):
    for j in range(4):
        for k in range(4):
            print(dates[i][j][k], end = " ")
        print()
    print()
'''
