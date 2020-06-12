#def BinarySearch(lst, key):

list1 = [1,5,6,2,3,7,9,8,4]
list2 = [1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4]




# input => 6 of Num
intNum = []
for i in range(3):
    intNum.append(int(input()))

floatNum = []
for i in range(3):
    floatNum.append(float(input()))


# intNum

#SIZE = 9 , for i <=8, i<8 = 7
SIZE = len(list1)

print("From:", end=" ")
for i in range(SIZE):
    if i < SIZE -1:
        print(str(list1[i]) + ",", end="")
    else:
         print(str(list1[i])) #未排序

list1.sort()    # 排序完成

print("To:",end =" ")
for i in range(SIZE):
    if i < SIZE -1:
        print(str(list1[i]) + ",", end="")
    else:
         print(str(list1[i])) #已排序

for i in range(3):
    if list1.count(intNum[i]) != 0:
        print("{} at {}".format(intNum[i], list1.index(intNum[i])))
    else:
        print("{} at -1".format(intNum[i]))

print()

# floatNum

SIZE = len(list2)

print("From:", end=" ")
for i in range(SIZE):
    if i < SIZE -1:
        print(str(list2[i]) + ",", end="")
    else:
         print(str(list2[i])) #未排序

list2.sort()    # 排序完成

print("To:",end =" ")
for i in range(SIZE):
    if i < SIZE -1:
        print(str(list2[i]) + ",", end="")
    else:
         print(str(list2[i])) #已排序

for i in range(3):
    if list2.count(floatNum[i]) != 0:
        print("{} at {}".format(floatNum[i], list2.index(floatNum[i])))
    else:
        print("{} at -1".format(floatNum[i]))