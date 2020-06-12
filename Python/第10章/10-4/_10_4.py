from Date import Date
from Student import Student

name = str(input())
mon = int(input())
day = int(input())
year = int(input())

student1 = Student("John", Date(6, 1, 1999), 90)
student2 = Student("Marry", Date(10, 8, 1997), 80)

student1.setName(name)
student2.setBirthDay(Date(mon, day, year))

print(student1)
print(student2)