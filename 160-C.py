K, N = input().split()
K = int(K)
N = int(N)
A = list(map(int, input().split()))
A.append(K + A[0])
max = 0
for i in range(N):
    if max < (A[i+1] - A[i]):
        max = A[i+1] - A[i]
print(K - max)
