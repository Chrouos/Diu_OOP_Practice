from Ball import Ball
from Cube import Cube

bRadius = float(input())
bColor = str(input())

cLength = float(input())
cColor = str(input())

ball = Ball(bRadius, bColor)
cube = Cube(cLength, cColor)

print("Ball")
print("radius:%.1f, area:%.1f, volume:%.1f, color:%s"%(\
    ball.getRadius(), ball.getArea(), ball.getVolume(), ball.getColor()))

print("Cube")
print("length:%.1f, area:%.1f, volume:%.1f, color:%s"%\
    (cube.getLength(), cube.getArea(), cube.getVolume(), cube.getColor()))