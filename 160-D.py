N, X, Y = input().split()
N = int(N)
X  =int(X)
Y = int(Y)

k = [0] * N
for i in range(1, N):
    for j in range(i+1, N+1):
        min = abs(j-i)
        min1 = abs(Y-j)+abs(X-i)+1
        min2 = abs(Y-i)+abs(j-X)+1
        if min > min1:
            min = min1
        if min > min2:
            min = min2
        k[min] += 1
for i in range(1, N):
    print(k[i])
