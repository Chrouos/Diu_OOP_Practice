from abc import ABC, abstractmethod

class GeometricObject(ABC):
    def __init(self, color):
        self__color = color

    def setColor(self, color):
        self.__color = color
    def getColor(self):
        return self.__color
    
    @abstractmethod
    def getVolume(self):
        pass
    @abstractmethod
    def getArea(self):
        pass