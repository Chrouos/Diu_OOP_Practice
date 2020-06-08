from Score import Score

score1 = Score("John", 90)
score2 = Score("Mary", 80)

name = str(input())
math = int(input())

score1.setName(name)
score2.setMath(math)

score1.print()
score2.print()