from GeometricObject import GeometricObject

class Cube(GeometricObject):
    def __init__(self, length ,color):
        self.__length = length 
        super().setColor(color)

    def setLength(self, length):
        self.__length = length
    def getLength(self):
        return self.__length

    def getVolume(self):
        return self.__length **3
    def getArea(self):
        return 6* self.__length**2