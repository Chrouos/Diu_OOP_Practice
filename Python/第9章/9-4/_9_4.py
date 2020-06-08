from BMI import BMI

name = str(input())
weight = int(input())
height = float(input())

bmi = BMI(name, weight, height)

print(bmi.getName(), round(bmi.getBMI(),2))