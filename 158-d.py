from collections import deque
S = deque([i for i in input()])
Q = int(input())
#list = [['1', "0", "0"] for i in range(Q) ]
for i in range(Q):
    a = input()
    if a[0] == '2':
        #p, q, r = map(str, a.split())
        if a[2] == "1":
            S.appendleft(a[4])
        else:
            S.append(a[4])
    else:
        S[0], S[-1] = S[-1], S[0]
ans = ""
N = len(S)
for i in range(N):
    ans = ans + S.popleft()
print(ans)
