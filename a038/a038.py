origin = int(input())
out = 0

for i in range(len(str(origin)), 0, -1):
    out*=10
    a = origin % 10
    origin = (origin -a)/10

    out =( out + a )

print(int(out))