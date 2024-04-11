l = list()
n = int(input())

for i in range(n):
    x, y = map(int, input().split())
    l.append([x*x+y*y, x, y])

l.sort()
print(f"{l[n-2][1]} {l[n-2][2]}")
