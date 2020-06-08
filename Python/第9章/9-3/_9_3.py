from Rectangle import Rectangle

w1 = float(input())
h1 = float(input())
w2 = float(input())
h2 = float(input())

rect1 = Rectangle(w1,h1)
rect2 = Rectangle(w1,h2)

print("%.2f %.2f"%(rect1.getArea(), rect1.getPerimeter()))
print("{:.2f} {:.2f}".format(rect2.getArea(), rect2.getPerimeter()))

rect2.setHeight(5.0)
rect2.setWidth(2.5)

print("%.2f %.2f"%(rect2.getArea(), rect2.getPerimeter()))