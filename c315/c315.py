x = 0
y = 0

for i in range(int(input())):
    a, b = map(int, input().split())

    if(a==0): y+=b
    elif(a==1):x+=b
    elif(a==2): y-=b
    elif(a==3): x-=b

print(x, y)
