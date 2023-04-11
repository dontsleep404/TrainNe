n = int(input())
a = list(map(int, input().split()))
b = []
for i in range(1, n):
    b.append(a[i] - a[i-1])
c = 0
d = 0
mx = 0
for i in range(0, len(b)):
    if b[i] == c:
        d += 1
    else:
        mx = max(mx, d)
        c = b[i]
        d = 1
mx = max(mx, d)
print(mx + 1)