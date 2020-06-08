class BMI:
    def __init__(self, name, weight, height):
        self.__name = name
        self.__weight = weight
        self.__height = height
    def getBMI(self):
        return self.__weight / (self.__height * self.__height)
    def getName(self):
        return self.__name