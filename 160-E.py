X, Y, A, B, C = map(int, input().split())
a = [int(i) for i in input().split()]
b = [int(i) for i in input().split()]
c = [int(i) for i in input().split()]
a = sorted(a, reverse=True)[:X]
b = sorted(b, reverse=True)[:Y]
print(sum(sorted(a + b + c, reverse=True)[:X+Y]))
