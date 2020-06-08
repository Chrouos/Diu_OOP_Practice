class Score:
    def __init__(self, name, math):
        self.__name = name
        self.__math = math
    def setName(self, name):
        self.__name = name
    def setMath(self, math):
        self.__math = math
    def getName(self):
        return self.__name
    def getMath(self):
        return self.__math