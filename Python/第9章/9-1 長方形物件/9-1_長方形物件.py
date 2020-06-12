class Rectangle:
    def __init__(self, width, height):
        self.width = width
        self.height = height
    def getArea(self):
        return self.width * self.height
    def getPerimeter(self):
        return 2 * (self.width + self.height)


w1 = float(input())
h1 = float(input())
w2 = float(input())
h2 = float(input())

rect1 = Rectangle(w1,h1)
rect2 = Rectangle(w2,h2)

# 此次重點： print後的小數點 x為小數點
# {:.xf}.format
# %.xf %()
print("{:.2f} {:.2f}".format(rect1.getArea(), rect1.getPerimeter()))
print("%.2f %.2f"%(rect2.getArea(), rect2.getPerimeter()))

rect2.width = 5.0
rect2.height = 2.5
print("{:.2f} {:.2f}".format(rect2.getArea(), rect2.getPerimeter()))