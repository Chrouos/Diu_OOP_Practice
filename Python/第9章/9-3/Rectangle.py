class Rectangle:
    def __init__(self, width, height):
        self.__width = width
        self.__height = height
    def getArea(self):
        return self.__width * self.__height
    def getPerimeter(self):
        return 2*(self.__width + self.__height)
    def setWidth(self, width):
        self.__width = width
    def setHeight(self, height):
        self.__height = height