from Ball import Ball
from Cube import Cube
from GeometricObject import GeometricObject

def display(G = GeometricObject):
    print(", area:%.1f, volume:%.1f, color:%s"%\
        (G.getArea(), G.getVolume(), G.getColor()))

bRadius = float(input())
bColor = str(input())

cLength = float(input())
cColor = str(input())

ball = Ball(bRadius, bColor)
cube = Cube(cLength, cColor)

print("Ball\nradius:%.1f"%ball.getRadius(), end= "")
display(ball)

print("Cube\nlength:%.1f"%cube.getLength(), end= "")
display(cube)