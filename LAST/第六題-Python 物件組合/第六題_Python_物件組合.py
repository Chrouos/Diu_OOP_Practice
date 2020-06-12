from Teacher import Teacher
from Body import Body

teacher1 = Teacher("Candy", Body(1.7, 80), 88000)
teacher2 = Teacher("Linda", Body(1.6, 90), 61000)

t1Name = str(input())
t2Height = float(input())
t2Weight = float(input())

teacher1.setName(t1Name)
teacher2.setBody(Body(t2Height, t2Weight))

print(teacher1)
print(teacher2)