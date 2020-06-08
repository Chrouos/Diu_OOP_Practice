from Score import Score

score1 = Score("John", 90)
score2 = Score("Mary", 80)

name1 = str(input())
math1 = int(input())
name2 = str(input())
math2 = str(input())

score1.setName(name1)
score2.setMath(math2)

print(score1.getName(), score1.getMath())
print(score2.getName(), score2.getMath())