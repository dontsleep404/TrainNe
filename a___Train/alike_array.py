n = int(input())
a = list(map(int, input().split()))
mx = 1
pr = a[0]
c = 1
for i in range(1, n):
    if a[i] == pr:
        c += 1
    else:
        mx = max(mx, c)
        pr = a[i]
        c = 1
mx = max(mx, c)
print(mx)