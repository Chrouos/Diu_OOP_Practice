from Sphere import Sphere
from Cuboid import Cuboid

spRadius = float(input())
spColor = str(input())

cuLength = float(input())
cuWidth = float(input())
cuHeight = float(input())
cuColor = str(input())

sp = Sphere(spRadius, spColor)
cu = Cuboid(cuLength, cuWidth, cuHeight, cuColor)

print(str(sp) + ":(%d),%.1f,%s"%(sp.getRadius(), sp.getVolume(), sp.getColor()))
print(str(cu) + ":(%d,%d,%d),%.1f,%s"%(cu.getLength(), cu.getWidth(), cu.getHeight(),cu.getVolume(), cu.getColor() ))