
day = int(0)

# 先製作一個LIST
dates = []

for i in range(5):
    dates.append([])
    for j in range(4):
        dates[i].append([])
        for k in range(4):
            dates[i][j].append([])

date = [[[1,3,5,7],[9,11,13,15],[17,19,21,23],[25,27,29,31]],\
        [[2,3,6,7],[10,11,13,15],[18,19,22,23],[26,27,30,31]],\
        [[4,5,6,7],[12,13,14,15],[20,21,22,23],[28,29,30,31]],\
        [[8,9,10,11],[12,13,14,15],[24,25,26,27],[28,29,30,31]],\
        [[26,17,18,19],[20,21,22,23],[24,25,26,27],[28,29,30,31]]]

# COPY
for i in range(5):
    for j in range(4):
        for k in range(4):
            dates[i][j][k] = date[i][j][k]


# Guess your birthday
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
