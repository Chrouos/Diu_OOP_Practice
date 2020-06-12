class Rectangle():
    def __init__(self, width, height):
        self.__width = width
        self.__height = height

    def setWidth(self):
        self.__width = width
    def setHeight(self):
        self.__height = height

    def getWidth(self):
        return self.__width
    def getHeight(self):
        return self.__height

    def getArea(self):
        return self.__width * self.__height

    def __str__(self):
        return str("width: {}, height: {}, area: {}".format(self.getWidth(), self.getHeight(), self.getArea()))