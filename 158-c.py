import math
A, B = map(int, input().split())
flag = False
for x in range(1, 1000+100):
    if A == math.floor(x*0.08) and B == math.floor(x*0.1):
        print(x)
        flag = True
        break
if not flag:
    print(-1)
