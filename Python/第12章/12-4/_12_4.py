def stuAve(score):
    total = 0
    for i in range(3):
        total += score[i]
    return total / 3 

def courseAve(score, n):
    average = 0
    for i in range(5):
        average += score[i][n]
    return average / 5

# make a two-dimensional array, 5 * 3
score = [\
    [80.0, 70.0, 90.0],\
    [85.0, 77.0, 95.0],\
    [83.0, 75.0, 70.0],\
    [73.0, 95.0, 67.0],\
    [88.0, 79.0, 71.0]]

for i in range(5):
    for j in range(3):
        print(score[i][j], end = ", ")
    print(round(stuAve(score[i]), 1))

print("Average:", str(round(courseAve(score, 0),1)) + ", " + str(round(courseAve(score, 1),1)) + ", " + str(round(courseAve(score, 2),1)))