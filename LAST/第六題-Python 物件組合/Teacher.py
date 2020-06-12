from Body import Body

class Teacher():
    def __init__(self, name, body, salary):
        self.__name = name
        self.__body = body
        self.__salary = salary

    def setName(self, name):
        self.__name = name
    def setBody(self, body):
        self.__body = body
    def setSalary(self, salary):
        self.__salary = salary

    def getName(self):
        return self.__name
    def getBody(self):
        return self.__body
    def getSalary(self):
        return self.__salary

    def __str__(self):
        return str("{} {} {}".format(self.__name, self.__body.__str__(), self.__salary))