a = int(input())
x = list()

for i in range(a):
    f, b = map(int, input().split())
    x.insert(i, [f,b])

x.sort()

for i in range(a):
    print(f"{x[i][0]} {x[i][1]}")

