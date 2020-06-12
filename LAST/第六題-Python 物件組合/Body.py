class Body():
    def __init__(self, height, weight):
        self.__height = height
        self.__weight=weight

    def setHeight(self, height):
        self.__height = height
    def getHeight(self):
        return self.__height

    def setWeight(self, weight):
        self.__weight = weight
    def getWeight(self):
        return self.__weight

    def __str__(self):
        bmi = self.__weight / self.__height**2
        return round(bmi, 2)
        