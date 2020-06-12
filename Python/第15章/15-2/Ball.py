from GeometricObject import GeometricObject

class Ball(GeometricObject):
    def __init__(self, radius, color):
        self.__radius = radius
        super().setColor(color)

    def setRadius(self, radius):
        self.__radius = radius
    def getRadius(self):
        return self.__radius

    def getVolume(self):
        return 4 * 3.14159 * self.__radius ** 3 / 3
    def getArea(self):
        return 4 * 3.14159 * self.__radius ** 2