from Rectangle import Rectangle

r1 = Rectangle(1, 1)
r2 = Rectangle(2, 2)

#太誇張了，他直接換好了，python是鬼?

print("r1:", r1)
print("r2:", r2)

temp = r1
r1 = r2
r2 = temp
print("\nchange \n")

print("r1:", r1)
print("r2:", r2)