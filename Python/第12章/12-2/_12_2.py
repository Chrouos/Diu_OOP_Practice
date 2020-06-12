
list = []
for n in range(9):
    list.append(input())

for i in range(4):

    n1 = int(list.pop())
    symbol = list.pop()
    n2 = int(list.pop())

    # 製作 + - * / ， 由於拿出的順續 所以是 n2 - n1
    if symbol == "+":
        ans = n2 + n1
    elif symbol == "-":
        ans = n2 - n1
    elif symbol == "*":
        ans = n2 * n1
    elif symbol == "/":
        ans = n2 / n1

    print(int(ans))
    list.append(int(ans))
