class Student():
    def __init__(self, name, birthDay, score):
        self.__name = name
        self.__birthDay = birthDay
        self.__score = score

    def setName(self, name):
        self.__name = name
    def setBirthDay(self, birthDay):
        self.__birthDay = birthDay
    def setScore(self, score):
        self.__score = score

    def getName(self):
        return self.__name
    def getBirthDay(self):
        return self.__birthDay
    def getScore(self):
        return self.__score

    def __str__(self):
        return str("{} {} {}".format(self.__name, self.__birthDay.toString(), self.__score))