N, M = map(int, input().split())
A = list(map(int, input().split()))
sum = sum(A)
cnt = 0
for i in range(N):
    if A[i] < sum*(1/(4*M)):
        cnt += 1
if (len(A) - cnt) >= M:
    print("Yes")
else:
    print("No")
