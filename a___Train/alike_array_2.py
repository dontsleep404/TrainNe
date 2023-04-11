n = int(input())
a = list(map(int, input().split()))
b = []
c = [a[0], 1]
for i in range(1, n):
    if a[i] == c[0]:
        c[1] += 1
    else:
        b.append(c)
        c = [a[i], 1]
b.append(c)
mx = 0
for i in range(len(b)):
    mx = max(mx, b[i][1] + 1 if len(b) > 1 else b[i][1])
    if(b[i][1] == 1 and i > 0 and i < len(b)-1 and b[i-1][0] == b[i+1][0]):
        mx = max(mx, b[i-1][1] + b[i+1][1] + 1)
print(mx)