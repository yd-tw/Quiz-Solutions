a, b = map(int, input().split())

if ((a%2==1)and(b%2==1)):
    print(int((b-a)/2))
else:
    print(int((b-a)/2)+1)
