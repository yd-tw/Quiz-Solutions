a = list(input().split())

print(a[1], end="")
for i in range(2, len(a)):
    print(f" {a[0]} {a[i]}", end="")
