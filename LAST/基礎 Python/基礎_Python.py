def binarySearch(lst, key):
    low = 0
    high = len(lst)
    while high >= low :
        mid = (low + high) // 2
        if key < lst[mid]:
            high = mid - 1
        elif key == lst[mid]:
            return mid
        else:
            low = mid +1
    return -1

list1 = [1, 3, 5, 7, 9, 11, 13, 15, 17]
list2 = [1.1, 3.3, 5.5, 7.7, 9.9, 11.1, 13.3, 15.5, 17.7]

#以下整數
intNum = []
for i in range(3):
    intNum.append(int(input()))

#以下浮點數
floatNum = []
for i in range(3):
    floatNum.append(float(input()))

print("list1:", list1)
for i in range(3):
    print("{} at {}".format(intNum[i], binarySearch(list1, intNum[i])))

print()

print("list2:", list2)
for i in range(3):
    print("{} at {}".format(floatNum[i], binarySearch(list2, floatNum[i])))



"""
#利用 index 內建函式進行

# 整數
print("list1", list1)
for i in range(3):
    if(list1.count(intNum[i]) != 0):
        print("{} at {}".format(intNum[i], list1.index(intNum[i])))
    else:
        print("{} at -1".format(intNum[i]))

print()

# 浮點數
print("list2", list2)
for i in range(3):
    if(list2.count(floatNum[i]) != 0):
        print("{} at {}".format(floatNum[i], list2.index(floatNum[i])))
    else:
        print("{} at -1".format(floatNum[i]))


"""