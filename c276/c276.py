k = input()
t = int(input())

for i in range(t):
    a = 0
    b = 0
    x = input()

    for j in range(4):
        if(k[j]==x[j]):
            a = a + 1
        elif(k.find(x[j])>=0):
           b = b + 1

    print(f"{a}A{b}B")
