N = int(input())
ans = 0
flag = 0
cnt = 0
for i in range(1, 10000):
    if i <= 9:
        ans = i
        cnt+= 1
    else:
        l = str(i)
        n = len(l)
        #print(i)
        for j in range(0, n-1):
            if abs(int(l[j+1]) - int(l[j])) > 1:
                flag += 1
                break
        if flag == 0:
            ans = i
            cnt+= 1
        print(i, ans, cnt)
    if cnt == N:
        print(ans)
        break
