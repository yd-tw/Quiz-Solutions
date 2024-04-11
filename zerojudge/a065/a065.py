x = str(input())
s = ""

for i in range(len(x)-1):
    
    f = ord(x[i])
    b = ord(x[i+1])

    
    if f-b > 0:
        s = s + str(f-b)
    else:
        s = s + str(b-f)

print(s)

