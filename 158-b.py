N, A, B = map(int, input().split())
a = (N // (A + B)) * A
if N % (A+B) < A:
    print(a + (N % (A + B)))
else:
    print(a + A)
