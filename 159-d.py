N = int(input())
A = [int(a) for a in input().split()]
a = [0] * N
for i in A:
    a[i-1] += 1
cnt = 0
cnt += sum([i*(i-1)//2 for i in a])
for i in A:
    print(cnt - (a[i-1]-1))
