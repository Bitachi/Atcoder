import math
N, K = map(int, input().split())
r = N % K
if r <  abs(r - K):
    print(r)
else:
    print(abs(r - K))
