from Rectangle_9_2 import Rectangle

w1 = float(input())
h1 = float(input())
w2 = float(input())
h2 = float(input())

rect1 = Rectangle(w1,h1)
rect2 = Rectangle(w2,h2)

print("%.2f %.2f"%(rect1.getArea(), rect1.getPerimeter()))
print("%.2f %.2f"%(rect2.getArea(), rect2.getPerimeter()))

rect1.width = 2.5
rect2.height = 5.0

print("{:.2f} {:.2f}".format(rect2.getArea(), rect2.getArea()))